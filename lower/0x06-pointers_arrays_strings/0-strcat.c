#include "main.h"

/**
* _strcat - function that concatenates two strings
*@dest: string to be appended to
*@src: string to append
* Return: char
*/

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
