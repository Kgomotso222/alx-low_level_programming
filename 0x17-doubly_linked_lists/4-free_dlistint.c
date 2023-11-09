#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->prev)
		head = head->prev;
	while (head->next)
	{
		head = head->next;
		if (head)
			free(head->prev);
	}
	if (head)
		free(head);
}
