#include "monty.h"

/**
 * mul_func - multiplies the 2nd top element with the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void mul_func(stack_t **stack, unsigned int line_number)
{
	stack_t *second;

	/* check if stack contains at least two elements */
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	second = (*stack)->next;

	/* mulltiplies the top and second elements and store in the second */
	second->n =  (second->n * (*stack)->n);
	free(*stack); /* remove the top element */
	*stack = second; /* moves to the head */
	second->prev = NULL;
}
