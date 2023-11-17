#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len -> return number of elements of list
 *
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
