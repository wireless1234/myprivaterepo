#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - create memory
 *@b: size
 *Return: return pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *memPtr;

	memPtr = malloc(b);
	if (memPtr == NULL)
		exit(98);
	return (memPtr);
}
