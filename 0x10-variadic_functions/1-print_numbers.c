#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers in arguments
 *
 * @separator: separator of number
 * @n: arguments count
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
}
