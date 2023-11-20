#include "monty.h"

/**
 * rotr_func - last element of the stack becomes the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void rotr_func(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void)line_number; /* unused */

	/* stack empty or contains one element */
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	node = *stack;

	/* traverse to the last stack element */
	while (node)
	{
		if (node->next == NULL) /* last element */
		{
			node->prev->next = NULL; /* last's prev becomes the last */
			node->prev = NULL;
			node->next = (*stack);
			(*stack)->prev = node;
			(*stack) = node;
			break;
		}
		node = node->next;
	}
}
