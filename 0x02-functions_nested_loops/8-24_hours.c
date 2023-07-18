#include "main.h"

/**
 * jack_bauer - print minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l = 0;

	for (; i <= 2; i++)
	{
		for (; j <= 3; j++)
		{
			for (; k <= 5; k++)
			{
				for (; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
