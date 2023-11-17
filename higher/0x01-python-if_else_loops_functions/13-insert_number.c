#include "lists.h"
/**
 * insert_node - insert node into linked list
 * @head: pointer to first list node
 * @number: data
 * Return: address of new node or null
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current_node;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = number;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if ((*head)->n >= number)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = number;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next && (current_node->next->n < number))
	{
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = number;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
