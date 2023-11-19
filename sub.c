#include "monty.h"

/**
 * sub_func - subtracts the top element of the stack from the 2nd of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void sub_func(stack_t **stack, unsigned int line_number)
{
	stack_t *second;

	/* check if stack contains at least two elements */
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	second = (*stack)->next;

	/* sub the top element from second one and store in the second */
	second->n =  second->n - (*stack)->n;
	free(*stack); /* remove the top element */
	*stack = second;
	second->prev = NULL;
}
