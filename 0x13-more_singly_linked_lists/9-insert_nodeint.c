#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index where the new node should be added, starting from 0
 * @n: value to be added in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode = *head;
	unsigned int c;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (c = 0; c < idx - 1; c++)
	{
		if (currentNode == NULL)
			return (NULL);
		currentNode = currentNode->next;
	}
	if (currentNode == NULL)
		return (NULL);
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
