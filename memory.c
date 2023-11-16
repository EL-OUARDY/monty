#include "monty.h"
/**
 * free_stack - frees stack linked list
 * @head: head of the linked list
 */
void free_stack(stack_t *head)
{
	stack_t *next_node;

	/* check the head pointer */
	if (head == NULL)
		return;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
