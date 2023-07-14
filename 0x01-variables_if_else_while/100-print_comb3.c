#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return 0
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
