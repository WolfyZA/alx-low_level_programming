#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
