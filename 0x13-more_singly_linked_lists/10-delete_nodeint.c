#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to a pointer to the first node of the linked list
 * @index: index of the node to be deleted (starting from 0)
 * Return: 1(success), -1(fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
