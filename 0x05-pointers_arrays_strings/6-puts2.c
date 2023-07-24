#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0' && str[i] != '\\' && str[i]  != '0')
	{
		_putchar (str[i]);
		i += 2;
	}
	_putchar('\n');
}
