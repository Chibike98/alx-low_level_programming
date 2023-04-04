#include "lists.h"
/**
 * add_nodeint - Add new node at the beginning of a listint_t list.
 * @head: A pointer to point to the first node of list.
 * @n: The integer to store in the new node.
 * Return: The address of the new node, or NULL if fail.
 */
static listint_t *add_nodeint_helper(listint_t **head, const int n)
{
	listint_t *new_node;

	New_Node = malloc(sizeof(listint_t));
	if (New_Node == NULL)
		return (NULL);
	New_Node->n = n;
	New_Node->next = *head;
	*head = New_Node;
	return (New_Node);
}
listint_t *add_nodeint(listint_t **head, const int n)
{
	return (add_nodeint_helper(head, n));
}

