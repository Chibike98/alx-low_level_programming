#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c)
			c++;
		}
	putchar('\n');
	return (0);
}
