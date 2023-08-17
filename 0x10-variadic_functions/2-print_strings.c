#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all arguments
 *
 * @separator: separator
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
