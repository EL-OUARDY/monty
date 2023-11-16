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
			op_codes[i].f(&shared_data.stack, shared_data.nb_line);
			return;
		}
	}

	/* if no match found, print error message and release ressources */
	char *err_format;

	err_format = "L%d: unknown instruction %s\n";
	fprintf(stderr, err_format, shared_data.nb_line, shared_data.opcode);
	fclose(shared_data.file);
	free(shared_data.line_content);
	free_stack(shared_data.stack);
	exit(EXIT_FAILURE);
}
