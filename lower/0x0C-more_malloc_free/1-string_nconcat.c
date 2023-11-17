#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenate string
 *@s1: string1
 *@s2: string2
 *@n: number of character of s2
 *Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *myStr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < strlen(s2))
	{
		j = strlen(s1) + n + 1;
		myStr = malloc(sizeof(*myStr) * j);
	}
	else
	{
		j = strlen(s1) + strlen(s2) + 1;
		myStr = malloc(sizeof(*myStr) * j);
	}
	if (myStr == NULL)
		return (NULL);
	for (i = 0; i < (j - 1); i++)
	{
		if (i < strlen(s1))
		{
			myStr[i] = s1[i];
		}
		else
		{
			myStr[i] = s2[i - strlen(s1)];
		}
	}
	myStr[i] = '\0';
	return (myStr);
}
