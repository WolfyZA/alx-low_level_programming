#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t for print
 *
 * Return: the number of nodes successfully printed
 */
size_t print_list(const list_t *h)
{
	size_t suc = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		suc++;
	}

	return (suc);
}

