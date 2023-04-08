#include "main.h"
/**
 * print_binary - print binary rep of a number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8;
	unsigned long int a = (unsigned long int)1 << (bit_count - 1);

	while (a > 0)
	{
		if (n & a)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		a >>= 1;
	}
	printf("\n");
}
