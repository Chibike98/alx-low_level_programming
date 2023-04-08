#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int c = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[c] != '\0')
	{
		if (b[c] == '0')
		{
			answer <<= 1;
		}
		else if (b[c] == '1')
		{
			answer <<= 1;
			answer |= 1;
		}
		else
		{
			return (0);
		}
		c++;
	}
	return (answer);
}
