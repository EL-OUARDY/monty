#include "monty.h"
/**
 * call_instruction_handler - call the right instruction handler function
 * @opcode: operation code
 * @arg: operation argument
 * Return: void
 */
void call_instruction_handler(char *opcode, char *arg)
{
	int i, array_size;
	instruction_t op_codes[] = {
		{"push", push_func},
		{"pall", pall_func},
		{"pint", pint_func},
		{"pop", pop_func},
		{"swap", swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{"sub", sub_func},
		{"div", div_func},
		{"mul", mul_func},
		{"mod", mod_func},
		{"pchar", pchar_func},
		{"pstr", pstr_func},
		{"rotl", rotl_func},
	};
	(void)arg;

	/* get ops array size */
	array_size = sizeof(op_codes) / sizeof(op_codes[0]);

	/* loop over op_codes array to find a match */
	for (i = 0; i < array_size; i++)
	{
		if (strcmp(op_codes[i].opcode, opcode) == 0)
		{
			/* call the handler */
			op_codes[i].f(&sd.stack, sd.nb_line);
			return;
		}
	}

	/* if no match found, print error message and release ressources */
	fprintf(stderr, "L%d: unknown instruction %s\n", sd.nb_line, sd.opcode);
	fclose(sd.file);
	free(sd.line_content);
	free_stack(sd.stack);
	exit(EXIT_FAILURE);
}

