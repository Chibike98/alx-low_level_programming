#include "lists.h"

/**
 * pop_listint - Delete head node of linked list and returns the head node data
 * @head: A pointer to a pointer to the first node of the list
 * Return: The head node's data, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int new_data;

	if (*head == NULL)
		return (0);
	new_data = (*head)->n;
	*head = (*head)->next;
	free(*head);
	return (new_data);
}
