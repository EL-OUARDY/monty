#include "monty.h"

/**
 * pop_func - removes the top element of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pop_func(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	/* check if stack is empty */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	top = *stack; /* save target node */

	*stack = (*stack)->next; /* head moves to the previous node */

	free(top); /* remove from memory */
}


