#include "lists.h"

/**
 * free_listin2 - Frees a listint_t list.
 * @head: A pointer to the address of the head the listint_t list.
 *
 * Description: frees a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
