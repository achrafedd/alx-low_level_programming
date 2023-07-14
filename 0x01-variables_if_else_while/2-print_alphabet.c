#include <stdio.h>

/**
 * main - Print a lower case letters
 *
 * Return: 0.
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
