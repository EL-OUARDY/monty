#include "monty.h"

/**
 * push_queue - insert a node to the queue
 * @head: head of the stack
 * @value: the integer value
 * Return: no return
 */
void push_queue(stack_t **head, int value)
{
	stack_t *new_node, *temp;

	new_node = malloc(sizeof(stack_t)); /* allocate memory */
	if (new_node == NULL) /* failed */
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(sd.file);
		free(sd.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;

	new_node->n = value;
	new_node->next = NULL;

	if (!temp) /* empty queue */
	{
		*head = new_node;
		new_node->prev = NULL;
		return;
	}

	/* traverse to the tail node */
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
}
