#include "main.h"
/**
 * _strcmp - compares pointer to two strings
 * @s1: pointer to first string to be compared
 * @s2: pointer to second string to be compared
 * Return: if str1 < str2, the negative difference of the first unmatched char
 * If str1 == str2, 0
 * If str1 > str2, positve difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
