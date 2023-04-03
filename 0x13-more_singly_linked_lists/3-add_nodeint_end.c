#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: integer value to be stored in the new node.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode, *LastNode;

	if (head == NULL)
		return (NULL);
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;
	if (*head == NULL)
		*head = NewNode;
	else
	{
		LastNode = *head;
		while (LastNode->next != NULL)
			LastNode = LastNode->next;
		LastNode->next = NewNode;
	}
	return (NewNode);
}

