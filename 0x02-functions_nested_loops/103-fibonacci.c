#include <stdio.h>

/**
 * main - Entery piont
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib_res;
	float res;

	while (1)
	{
		res = fib1 + fib2;
		if (fib_res > 4000000)
			break;

		if ((fib_res % 2) == 0)
			res += fib_res;

		fib1 = fib2;
		fib2 = fib_res;
	}
	printf("%.0f\n", res);

	return (0);
}
