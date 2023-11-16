#include "monty.h"

/**
 * push_func - pushes an element to the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void push_func(stack_t **stack, unsigned int line_number)
{
	int value;

	/* check if argument exists, and is a valid integer */
	if (shared_data.arg == NULL || !is_numeric(shared_data.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(shared_data.file);
		free(shared_data.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	value = atoi(shared_data.arg); /* convert argument to integer */
	push_stack(stack, value); /* insert to the stack */
}
