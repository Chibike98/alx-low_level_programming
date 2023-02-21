#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	char k;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}
