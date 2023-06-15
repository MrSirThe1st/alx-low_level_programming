#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @bsd: numbferer of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int bsd)
{
	void *ptr;

	ptr = malloc(bsd);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

