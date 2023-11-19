#include "monty.h"

/**
 * pchar_func - prints the char at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pchar_func(stack_t **stack, unsigned int line_number)
{
	int integer;

	/* check if stack is empty */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	integer = (*stack)->n;
	/* check if the integer value falls within the valid ASCII range */
	if (integer >= 0 && integer <= 127)
	{
		printf("%c\n", integer);
	}
	else /* not in the ascii table */
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}


