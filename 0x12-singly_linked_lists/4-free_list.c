#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freesdw a linked list
 * @headff: list_t list to be freed
 */
void free_list(list_t *headff)
{
	list_t *temp;

	while (headff)
	{
		temp = headff->next;
		free(headff->str);
		free(headff);
		headff = temp;
	}
}

