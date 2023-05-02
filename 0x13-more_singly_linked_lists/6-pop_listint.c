#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data inside elements deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nm);
}

