#include "monty.h"

/**
 * process_instruction - prepare and process the line instruction
 * Return: void
 */
void process_instruction(void)
{
	/* set opcode & argument shared variables */
	sd.opcode = strtok(sd.line_content, " \n\t");
	sd.arg = strtok(NULL, " \n\t");

	if (sd.opcode == NULL) /* blank line */
		return;

	/*
	 * printf("%d -> opcode = %s | arg = %s\n", sd.nb_line, \
	 * sd.opcode, sd.arg);
	 */

	/* call the right instruction handler */
	call_instruction_handler(sd.opcode, sd.arg);
}

