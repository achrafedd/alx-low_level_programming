#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
