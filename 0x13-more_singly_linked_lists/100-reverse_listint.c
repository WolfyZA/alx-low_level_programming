#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in newly made list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}

	*head = prv;

	return (*head);
}

