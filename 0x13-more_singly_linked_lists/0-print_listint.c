#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all element in a linked list
 * @h: linked list of type to print
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		no++;
	}
	return (no);
}
