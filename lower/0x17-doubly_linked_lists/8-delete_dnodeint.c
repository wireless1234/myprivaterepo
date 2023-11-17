#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: head pointer
 * @index: index to delete
 * Return: 1 on success -1 on error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;
	dlistint_t *hold;

	while (temp)
	{
		hold = temp->next;
		if (count == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = hold;
			else
				*head = hold;
			if (hold != NULL)
				hold->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = hold;
		count++;
	}
	return (-1);
}
