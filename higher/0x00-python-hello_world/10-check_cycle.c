#include <stdio.h>
#include "lists.h"
/**
 * check_cycle - check if a linked list has a cycle
 * @list: pointer to head of list
 * Return: 1 on success 0 on failure
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (list == NULL)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
