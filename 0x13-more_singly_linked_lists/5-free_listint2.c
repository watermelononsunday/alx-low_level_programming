#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint-t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
