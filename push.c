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
	if (sd.arg == NULL || !is_numeric(sd.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	value = atoi(sd.arg); /* convert argument to integer */
	if (sd.mode == STACK_MODE)
		push_stack(stack, value); /* insert to the stack */
	else /* queue */
		push_queue(stack, value); /* insert to the queue */
}

