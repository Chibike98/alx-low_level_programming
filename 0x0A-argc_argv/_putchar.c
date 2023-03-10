#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: 1(Success)
 * -1(Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
