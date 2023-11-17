#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - create array of int
 *@min: argument
 *@max: argument
 *Return: array
 */
int *array_range(int min, int max)
{
	int *my_arr;
	int i;
	int cnt = 0;

	if (min > max)
		return (NULL);
	my_arr = malloc(sizeof(my_arr) * ((max - min) + 1));
	if (my_arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		my_arr[cnt] = i;
		cnt++;
	}
	return (my_arr);
}
