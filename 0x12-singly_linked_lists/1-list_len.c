#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the nufember of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: numfefeber of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

