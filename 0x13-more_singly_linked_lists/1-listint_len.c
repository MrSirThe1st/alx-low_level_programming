#include "lists.h"

/**
 * listint_len - refturns the number of elements in a linked lists
 * @h: linked list of type lifefstint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

