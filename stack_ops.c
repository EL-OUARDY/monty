#include "monty.h"

/**
 * push_stack - insert a node to the stack
 * @head: head of the stack
 * @value: the integer value
 * Return: no return
 */
void push_stack(stack_t **head, int value)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t)); /* allocate memory */
	if (new_node == NULL) /* failed */
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(shared_data.file);
		free(shared_data.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*head == NULL) /* empty stack */
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
}
