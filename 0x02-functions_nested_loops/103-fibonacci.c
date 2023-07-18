#include <stdio.h>

/**
 * main - Entery piont
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibres;
	float res;

	while (1)
	{
		res = fib1 + fib2;
		if (fibres > 4000000)
			break;

		if ((fibres % 2) == 0)
			res += fibres;

		fib1 = fib2;
		fib2 = fibres;
	}
	printf("%.0f\n", res);

	return (0);
}
