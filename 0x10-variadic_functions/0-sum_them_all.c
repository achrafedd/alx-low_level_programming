#include <stdarg.h>

/**
 * sum_them_all - sum all numbers in argument
 *
 * @n: arguments count
 *
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0) return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}

	return (sum);
}
