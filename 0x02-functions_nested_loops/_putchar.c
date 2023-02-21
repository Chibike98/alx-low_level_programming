#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to print
 * Return: 1(Success)
 * Error, -1 is returned
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
