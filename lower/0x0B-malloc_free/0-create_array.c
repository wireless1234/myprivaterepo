#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create an array of chars, and initializes with specific char
 *@size: variable
 *@c: variable
 *Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *newArr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		newArr = (char *)malloc(size * sizeof(char));
		if (newArr == NULL)
		{
			return (NULL);
		}
	}
	while (i < size)
	{
		newArr[i] = c;
		i++;
	}
	return (newArr);
}
