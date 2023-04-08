#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string
 * Return: answer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b == '0')
			number <<= 1;
		else if (*b == '1')
			number = (number << 1) | 1;
		else
			return (0);
	}
	return (number);
}
