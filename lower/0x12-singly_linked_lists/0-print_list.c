#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elements of list
 *
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt += 1;
	}
	return (cnt);
}
