#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dff = *h - (*h)->next;
		if (dff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
