#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer towards list_t list
 * @str: string for the new node
 *
 * Return: address of new element(newe), or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newe;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!newe)
		return (NULL);

	newe->str = strdup(str);
	newe->len = len;
	newe->next = NULL;

	if (*head == NULL)
	{
		*head = newe;
		return (newe);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newe;

	return (newe);
}

