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
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	if (len + 1 % 2 != '0')
		n = (len - 1) / 2;
	else
		n = (len / 2);
	n++;

	for (len = n; str[len] != '\0'; len++)
	_putchar(str[len]);
	_putchar('\n');
}
