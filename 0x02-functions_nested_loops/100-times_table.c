#include "main.h"

/**
 * print_times_table - Print the n times table
 *
 * @n: number
 *
 * Return:  void
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i, j, res;

		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				res = i * j;

				if (res <= n)
				{
					_putchar(' ');
				} else
				{
					_putchar((res / 10) + '0');
				}

				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
	
}
