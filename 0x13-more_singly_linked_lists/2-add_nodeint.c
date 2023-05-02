#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: the pointer value to the first node in the list
 * @n: data to insert into new node
 *
 * Return: pointer to new node, or NULL if it does fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	n = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}

