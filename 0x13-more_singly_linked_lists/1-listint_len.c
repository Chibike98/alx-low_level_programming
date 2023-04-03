#include "lists.h"

/**
 * listint_len - returns the no of elements in a linked list
 * @h: pointer to the start of list
 * Return: the no of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t no;

	for (no = 0; h != NULL; no++)
		h = h->next;
	return (no);
}

