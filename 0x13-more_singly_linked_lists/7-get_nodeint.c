#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 * Return: pointer to the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);
	current_node = head;
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	return (current_node);
}
