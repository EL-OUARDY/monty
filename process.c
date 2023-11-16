#include "monty.h"

/**
 * process_instruction - prepare and process the line instruction
 * Return: void
 */
void process_instruction(void)
{
	/* set opcode & argument shared variables */
	shared_data.opcode = strtok(shared_data.line_content, " \n\t");
	shared_data.arg = strtok(NULL, " \n\t");

	if (shared_data.opcode == NULL) /* blank line */
		return;

	/*
	 * printf("%d -> opcode = %s | arg = %s\n", shared_data.nb_line, \
	 * shared_data.opcode, shared_data.arg);
	 */

	/* call the right instruction handler */
	call_instruction_handler(shared_data.opcode, shared_data.arg);
}
