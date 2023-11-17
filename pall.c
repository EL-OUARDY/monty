#include "monty.h"

/**
 * pall_func - prints all the values on the stack, starting from the top
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	stack_t *_stack;
	(void)line_number; /* unused */

	_stack = *stack;

	while (_stack)
	{
		printf("%d\n", _stack->n);
		_stack = _stack->next;
	}
}

