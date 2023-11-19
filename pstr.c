#include "monty.h"

/**
 * pstr_func - prints the string starting at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pstr_func(stack_t **stack, unsigned int line_number)
{
	stack_t *_stack;
	int integer;

	(void)line_number;

	/* check if stack is empty */
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	_stack = *stack;

	while (_stack)
	{
		integer = _stack->n;
		/* check if the integer value falls within the valid ASCII range */
		if (integer > 0 && integer <= 127)
		{
			printf("%c", integer);
			_stack = _stack->next;
		}
		else /* not in ascii table OR integer equals 0 */
		{
			printf("\n");
			return;
		}
	}
	printf("\n");
}


