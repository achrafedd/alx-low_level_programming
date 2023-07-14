#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56) 
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
