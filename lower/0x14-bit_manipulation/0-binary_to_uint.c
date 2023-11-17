#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary to unsigned
 * @b: argument
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result * 2) + (*b - '0');
		b++;
	}
	return (result);
}
