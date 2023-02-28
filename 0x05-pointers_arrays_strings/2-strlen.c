#include <stdio.h>
/**
 * _strlen - Returns length of string
 * @str: string to get length of
 * Return: length of @str
 */
size_t  _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
