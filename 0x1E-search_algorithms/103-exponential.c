#include "search_algos.h"

/**
* binary - binary search
*
* @array: array
* @low: low index
* @high: high index
* @value: value to be found in the array
*
* Return: the first index or -1
*/

int binary(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
* exponential_search - search for a value in the array with
* exponential search algorithm
*
* @array: array
* @size: the size of the array
* @value: value to be found in the array
*
* Return: the first index of the value in array or
* -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	for (i = 1; i < size && array[i] <= value; i = i * 2)
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%li] and [%li]\n", i / 2, right);

	return (binary(array, i / 2, right, value));
}
