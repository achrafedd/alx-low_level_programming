#include "search_algos.h"

/**
* linear_search - search for a value on an array with
* linear search algorithm
*
* @array: the array
* @size: the size of the array
* @value: the value to be found
*
* Return: first index of the value or -1 if not founded
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
