#include "search_algos.h"

/**
* interpolation_search - search for a value in the array with
* interpolation search algorihm
*
* @array: array
* @size: the size of the array
* @value: the value to be found
*
* Return: the first index of the value or -1 if the value
* not found
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;
	double f, s;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (size - 1);

	while (low < high)
	{
		f = ((double)(high - low) / (array[high] - array[low]));
		s = (value - array[low]);
		pos = low + (f * s);

		printf("Value checked array[%li] ", pos);

		if (pos > size)
		{
			printf("is out of range\n");
			return (-1);
		}
		else
			printf("= [%i]\n", array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
