#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print list
 * @h: head pointer
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}
	return (length);
}
