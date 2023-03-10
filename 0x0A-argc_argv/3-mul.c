#include <stdio.h>
/**
 * main - entry point
 * @agrc: argument count
 * @agrv: argument
 * Return: 0
 */
int main(int agrc, char *agrv[])
{
	int a, b;

	if (agrc == 3)
	{
		a = atoi(agrv[1]);
		b = atoi(agrv[2]);
	       printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
