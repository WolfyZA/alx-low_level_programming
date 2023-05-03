#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add to the node
 *
 * Return: address of new element(head), or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newe;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!newe)
		return (NULL);

	newe->str = strdup(str);
	newe->len = len;
	newe->next = (*head);
	(*head) = newe;

	return (*head);
}
