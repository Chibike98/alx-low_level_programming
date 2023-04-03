#include "lists.h"

int pop_listint(listint_t **head)
{
	int c;
	listint_t *new;

	if (*head == NULL)
	{
		return (0);
	}
	c = (*head)->c;
	new = *head;
	*head = (*head)->next;
	free(new);
	return (c);
}
