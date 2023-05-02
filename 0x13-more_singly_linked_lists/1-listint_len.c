#include "lists.h"

/**
 * listint_len - the number of elements in linked lists
 * @h: linked list of the type listint to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}

