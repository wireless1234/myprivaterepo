#include "main.h"

/**
 *string_toupper - a function that changes lowercase to uppercase
 *@n: pointer for string
 *
 *Return: void
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
	}
	return (n);
}
