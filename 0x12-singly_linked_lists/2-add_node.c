#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @headvv: double pointer to the list_t list
 * @str: new string to afdd in the node
 *
 * Return: the address of the nefefw element, or NULL if it fails
 */
list_t *add_node(list_t **headvv, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*headvv);
	(*headvv) = new;

	return (*headvv);
}

