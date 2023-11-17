#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
