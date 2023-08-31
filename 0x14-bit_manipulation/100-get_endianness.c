#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: number
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
