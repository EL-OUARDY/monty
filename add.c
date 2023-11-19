#include "monty.h"

/**
 * add_func -  adds the top two elements of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void add_func(stack_t **stack, unsigned int line_number)
{
	stack_t *second;

	/* check if stack contains at least two elements */
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	second = (*stack)->next;

	/* sum the top elements and store in the second one */
	second->n = (*stack)->n + second->n;
	free(*stack);
	*stack = second;
	second->prev = NULL;
}
