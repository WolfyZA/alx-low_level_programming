#include "lists.h"

/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: first node in linked list
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int sm = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sm += tmp->n;
		tmp = tmp->next;
	}

	return (sm);
}

