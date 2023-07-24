#include "main.h"
#include <string.h>

/**
 * puts_half - print half of string
 *
 * @str: string
 *
 * Return: viod
 */
void puts_half(char *str)
{
	int i;

	for (i = ((strlen(str) - 1) / 2); i < strlen(str); i++)
	{
		if (i % 2 == 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
