#include "monty.h"

/* initialize shared_data global variable */
shared_data_t shared_data = SHARED_DATA_INIT;

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

	shared_data.file = fopen(argv[1], "r"); /* open file - read mode */
	if (!shared_data.file)                  /* invalid file */
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_bytes > 0) /* read file line by line */
	{
		read_bytes = getline(&shared_data.line_content, &lsize, shared_data.file);
		shared_data.nb_line++;
		if (read_bytes > 0)
		{
			process_instruction();
		}
	}

	free(shared_data.line_content);
	free_stack(shared_data.stack);
	fclose(shared_data.file);
	return (EXIT_SUCCESS);
}
