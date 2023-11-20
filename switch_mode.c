#include "monty.h"

/**
 * stack_switch_func - set data format to stack
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void stack_switch_func(stack_t **stack, unsigned int line_number)
{
	(void)stack; /* unused */
	(void)line_number; /* unused */

	sd.mode = STACK_MODE; /* set mode */
}

/**
 * queue_switch_func - set data format to queue
 * @stack: double pointer to the stack
 * @line_number: line number of the instruction
 * Return: void
 */
void queue_switch_func(stack_t **stack, unsigned int line_number)
{
	(void)stack; /* unused */
	(void)line_number; /* unused */

	sd.mode = QUEUE_MODE; /* set mode */
}
