#include "monty.h"

/**
 * pint_func - prints the value at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pint_func(stack_t **stack, unsigned int line_number)
{
	/* check if stack is empty */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}


