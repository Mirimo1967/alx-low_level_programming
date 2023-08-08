#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **xy;
	int k, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	xy = malloc(sizeof(int *) * height);

	if (xy == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		xy[k] = malloc(sizeof(int) * width);

		if (xy[k] == NULL)
		{
			for (; k >= 0; k--)
				free(xy[k]);

			free(xy);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (t = 0; t < width; t++)
			xy[k][t] = 0;
	}

	return (xy);
}
