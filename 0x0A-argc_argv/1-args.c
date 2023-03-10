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
	(void) agrv;
	printf("%d\n", agrc - 1);
	return (0);
}
