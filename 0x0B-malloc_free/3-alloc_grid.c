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

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
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
