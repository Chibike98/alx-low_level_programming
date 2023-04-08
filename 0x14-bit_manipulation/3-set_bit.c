#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1(success) or  -1(fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int index_mask = 1UL << index;

	if (index > 63)
		return (-1);
	if ((*n & index_mask) == 0)
	{
		*n += index_mask;
		return (1);
	}
	return (1);
}
