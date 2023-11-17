#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenate all the args in the program
 * @ac: argument count
 * @av: argument list
 * Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j;
	int k = 0;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			length += 1;
		}
		length += 1;
	}
	new_str = malloc((sizeof(*new_str) * length) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
