#include "main.h"
/**
 * _strlen_recursion - returns d length of a string
 * @s: string to be returned
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
	       return (1 + _strlen_recursion(s + 1));
	}
}
