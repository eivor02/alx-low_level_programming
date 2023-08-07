#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to the allocated 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int s, b;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (s = 0; s < height; s++)
	{
		gridout[s] = malloc(width * sizeof(int));
		if (gridout[s] == NULL)
		{
			while (s > 0)
				free(gridout[--s]);
			free(gridout);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (b = 0; b < width; b++)
		{
			gridout[s][b] = 0;
		}
	}

	return (gridout);
}
