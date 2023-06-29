#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a newdwd node at the end of a linked list
 * @heady: double poifenter to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new elrfefement, or NULL if it failed
 */
list_t *add_node_end(list_t **heady, const char *str)
{
	list_t *new;
	list_t *temp = *heady;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*heady == NULL)
	{
		*heady = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

