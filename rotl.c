#include "monty.h"

/**
 * rotl_func - rotates the stack to the top
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void rotl_func(stack_t **stack, unsigned int line_number)
{
	stack_t *head, *second;

	(void)line_number; /* unused */

	/* stack empty or contains one element */
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	head = *stack;
	second = (*stack)->next;

	/* traverse to the last stack element */
	while (head)
	{
		if (head->next == NULL) /* last element */
		{
			head->next = *stack; /* append to the last element */
			(*stack)->next = NULL;
			(*stack)->prev = head;
			break;
		}
		head = head->next;
	}

	/* second becomes the head */
	*stack = second;
}
