#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @agrc: argument count
 * @agrv: argument
 * Return: 0
 */
int main(int agrc, char *agrv[])
{
	int count = 0;

	if (agrc > 0)
	{
		while (count < agrc)
		{
			printf("%s\n", agrv[count]);
			count++;
		}
	}
	return (0);
}
