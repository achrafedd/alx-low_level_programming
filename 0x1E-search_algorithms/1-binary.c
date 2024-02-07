#include "search_algos.h"

/**
* binary_search - search for a value on an array with
* binary search algorithem
*
* @array: the array
* @size: the size of the array
* @value: value to be found
*
* Return: index of the value in the array or -1 if value
* not found
*/
int binary_search(int *array, size_t size, int value)
{
	int start, mid, end, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i < end + 1; i++)
		{
			if (i == end)
				printf("%i", array[i]);
			else
				printf("%i, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
