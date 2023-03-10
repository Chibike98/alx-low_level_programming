#include "main.h"
/**
 * _strncat - joins two strings using an inputted number of bytes from src
 * @dest: string to be appended on
 * @src: string to be appended to dest
 * @n: number of btyes
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
