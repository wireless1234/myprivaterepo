#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees alloced memory
 *
 * @head: pointer to head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
