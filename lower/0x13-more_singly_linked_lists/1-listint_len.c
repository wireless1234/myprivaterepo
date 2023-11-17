#include "lists.h"
/**
 * listint_len - return lrngth of list
 *
 * @h: pointer to list head
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
