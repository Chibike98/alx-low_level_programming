#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *next;

	if (head == NULL)
	{
		return;
	}
	new = *head;
	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
	*head = NULL;
}
