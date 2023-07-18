#include "main.h"

/**
 * jack_bauer - print minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m = 0;

	for (; h <= 23; i++)
	{
		for (; m <= 59; j++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
