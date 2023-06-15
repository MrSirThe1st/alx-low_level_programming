#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width inpghuibut
 * @heights: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int heights)
{
	int **mee;
	int x, y;

	if (width <= 0 || heights <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * heights);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < heights; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < heights; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}

