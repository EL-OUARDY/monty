#include "monty.h"

/* initialize shared data global variable */
shared_data_t sd = SHARED_DATA_INIT;

/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int read_bytes = 1;
	size_t lsize;

	if (argc != 2) /* invalid arguments count */
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	sd.file = fopen(argv[1], "r"); /* open file - read mode */
	if (!sd.file)                  /* invalid file */
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_bytes > 0) /* read file line by line */
	{
		read_bytes = getline(&sd.line_content, &lsize, sd.file);
		sd.nb_line++;
		if (read_bytes > 0)
		{
			process_instruction();
		}
	}

	free(sd.line_content);
	free_stack(sd.stack);
	fclose(sd.file);
	return (EXIT_SUCCESS);
}
