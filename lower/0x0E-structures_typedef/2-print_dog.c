#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print dog details
 *@d: pointer
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
