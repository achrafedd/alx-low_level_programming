#include <stdlib.h>

/**
 * alloc_grid - Create 2D Array
 *
 * @width: Width of the Array
 * @height: Height of the Array
 *
 * Return: Pointer of the Array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr)
		{
			free(arr);
			for (j = 0; j < height; j++)
				;
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
