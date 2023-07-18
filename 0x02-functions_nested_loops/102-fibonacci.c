#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, res;

	for (i = 0; i < 50; i++)
	{
		res = fib1 + fib2;
		printf("%lu", res);

		fib1 = fib2;
		fib2 = res;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
