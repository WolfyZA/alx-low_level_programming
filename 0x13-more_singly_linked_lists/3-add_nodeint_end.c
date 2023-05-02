#include "lists.h"

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: pointer to first element in list
 * @n: data to insert into new element
 *
 * Return: pointer to new node, or NULL if it does fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *temp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nw;

	return (nw);
}

