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
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
