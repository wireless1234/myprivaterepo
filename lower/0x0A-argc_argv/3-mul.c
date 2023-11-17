#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply two numbers
 *@argc: argument
 *@argv: argument
 *Return: 0
 */
int main(int argc, char **argv)
{
	int mult = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
