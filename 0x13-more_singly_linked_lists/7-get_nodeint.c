#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return: pointer to node we are looking for, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}

