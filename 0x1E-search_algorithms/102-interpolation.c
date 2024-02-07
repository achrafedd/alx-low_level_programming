#include "search_algos.h"

/**
*
*
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (size - 1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		
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
