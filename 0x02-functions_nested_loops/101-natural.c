#include <stdio.h>

/**
 * main - Entry Piont
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, res = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			res += i;
	}

	printf("%d\n", sum);

	return (0);
}
