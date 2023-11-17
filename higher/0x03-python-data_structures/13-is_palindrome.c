#include "lists.h"

int is_palindrome(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *new_node = *head;
	listint_t *new_temp;
	listint_t *reverse_head = malloc(sizeof(listint_t));
	if (reverse_head == NULL):
		return (-1);
	reverse_head->n = temp->n;
	reverse_head->next = NULL;
	temp = temp->next;

	while (temp != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = temp->n;
		new_node->next = reverse_head;
		reverse_head = new_node;
		temp = temp->next;
	}
	temp = *head;
	new_temp = reverse_head;

	while(temp != NULL)
	{
		if (temp->n != new_temp->n)
			return (0);
		temp = temp->next;
		new_temp = new_temp->next;
	}
	return (1);
}
