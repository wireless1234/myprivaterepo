#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_strdup - create memory that contain string
 *@str: pointer
 *Return: character pointer
 */
char *_strdup(char *str)
{
	char *myStr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	myStr = (char *)malloc(strlen(str) * sizeof(char) + 1);
	if (myStr == NULL)
	{
		return (NULL);
	}
	while (i <= (int)strlen(str))
	{
		myStr[i] = str[i];
		i++;
	}
	return (myStr);
}
