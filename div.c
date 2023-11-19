#include "monty.h"

/**
 * div_func - divides the 2nd top element of the stack by the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void div_func(stack_t **stack, unsigned int line_number)
{
	stack_t *second;

	/* check if stack contains at least two elements */
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	/* avoid division by zero */
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	second = (*stack)->next;

	/* div the 2nd element by the top one and store in the second */
	second->n =  (second->n / (*stack)->n);
	free(*stack); /* remove the top element */
	*stack = second; /* second moves to the head of the stack */
	second->prev = NULL;
}
