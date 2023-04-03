#include "lists.h"

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	int c = (*head)->c;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (c);
}
