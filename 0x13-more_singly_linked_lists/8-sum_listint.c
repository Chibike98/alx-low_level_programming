#include "lists"
/**
 * sum_listint - Computes the sum of all the data (n) of a linked list
 * @head: Pointer to the head of the linked list
 * Return: The sum of all the data(n) of the linked list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
