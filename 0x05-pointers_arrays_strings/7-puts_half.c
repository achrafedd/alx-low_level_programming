#include "main.h"

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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
