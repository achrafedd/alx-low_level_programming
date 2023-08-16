#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - print all elements in the array
 *
 * @array: array
 * @size: size of array
 * @action: callback function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
