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
	(void) agrc;
	printf("%s\n", agrv[0]);
	return (0);
}
