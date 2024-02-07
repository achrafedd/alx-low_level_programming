#include "search_algos.h"

/**
* binary_rec - search for a value in the array with
* binary search algorithm
*
* @array: array
* @low: low index
* @high: high index
* @value: value to be found
*
* Return: first index or -1
*/
int binary_rec(int *array, int low, int high, int value)
{
	int i, mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = low + (high - low) / 2;
	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	if (array[mid] < value)
		return (binary_rec(array, mid + 1, high, value));
	return (binary_rec(array, low, mid, value));
}

/**
* advanced_binary - search for a value in the array with
* advanced binary algorithm
*
* @array: array
* @size: size of the array
* @value: value to be found in the array
*
* Return: first index or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	return (binary_rec(array, low, high, value));
}
