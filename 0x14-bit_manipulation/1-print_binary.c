#include "main.h"
/**
 * print_binary - print binary rep of a number
 * @n: no to print in binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int a = 0, count = 0;
	int binary[64];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		binary[a] = n % 2;
		n /= 2;
		a++;
	}
	for (int j = a - 1; j >= 0; j--)
	{
		if (binary[j] == 1)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
