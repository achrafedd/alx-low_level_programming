#include "main.h"

/**
 * 
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, res;
	unsigned int j, i;

	j = 0;
	res = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (dif & res))
			j++;
		res <<= 1;
	}

	return (j);

}
