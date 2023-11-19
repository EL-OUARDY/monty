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

	_stack = *stack;

	while (_stack)
	{
		integer = _stack->n;
		/* check if the integer value is outside of ASCII range */
		if (integer > 127 || integer <= 0)
			break;

		printf("%c", integer);
		_stack = _stack->next;
	}
	printf("\n"); /* empty stack OR stack loop is over */
}
