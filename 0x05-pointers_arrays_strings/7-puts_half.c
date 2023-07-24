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
	int i, len, half;

	len = strlen(str) - 1;

	if (len % 2 == 0)
	{
		half = len / 2;
	} lese
	{
		half = (len - 1) /2
	}

	for (i = half; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
