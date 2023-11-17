#include <stdio.h>
/**
 *array_iterator - iterate array
 *@array: array argument
 *@size: size of array
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int length = (int)size;

	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < length; i++)
	{
		action(array[i]);
	}
}
