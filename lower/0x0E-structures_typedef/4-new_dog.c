#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *my_name, *my_owner;
	int name_length, owner_length;

	name_length = strlen(name);
	owner_length = strlen(owner);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_name = malloc((name_length + 1) * sizeof(char));
	my_owner = malloc((owner_length + 1) * sizeof(char));
	if (my_name == NULL || my_owner == NULL)
	{
		free(my_name);
		free(my_owner);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_name, name);
	strcpy(my_owner, owner);
	my_dog->name = my_name;
	my_dog->age = age;
	my_dog->owner = my_owner;
	return (my_dog);
}
