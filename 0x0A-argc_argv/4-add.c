#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * check_num - check no of string
 * @str: string array
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @agrc: argument count
 * @agrv: argument
 * Return: 0
 */
int main(int agrc, char *agrv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < agrc)
	{
		if (check_num(agrv[count]))
		{
			str_to_int = atoi(agrv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
