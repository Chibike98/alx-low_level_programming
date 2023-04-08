#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	if (a == NULL)
	{
		return (0);
	}
	unsigned int b = 0;
	int c = 0;
	while (a[c] != '\0')
	{
		if (a[c] == '0')
		{
			b <<= 1:
		}
		else if (a[c] == '1')
		{
			b <<= 1;
			b |= 1;
		}
		else
		{
			return (0);
		}
		c++;
	}
	return (b);
}
