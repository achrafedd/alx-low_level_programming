#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all arguments
 *
 * @format: print format
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i, k;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				k = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				k = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				k = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				k = 0;
				break;
			default:
				k = 1;
				break;
		}
		if (format[i + 1] != '\0' && k == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
