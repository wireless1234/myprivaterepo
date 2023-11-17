#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int x;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
