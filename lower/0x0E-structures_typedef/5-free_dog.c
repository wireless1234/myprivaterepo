#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - free dogs
 *@d: dog object
 *Return: void
 */
void free_dog(dog_t *d)
{
	char *my_name = d->name;
	char *my_owner = d->owner;

	if (d == NULL)
		return;
	free(my_name);
	free(my_owner);
	free(d);
}
