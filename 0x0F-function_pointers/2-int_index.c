
/**
 * int_index - fined the element in the array
 *
 * @array: array
 * @size: size of the array
 * @cmp: callback function
 *
 * Return: index of the element in the array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
