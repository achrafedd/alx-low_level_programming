#include <stdio.h>

/**
 * main - Print a lower case letters in reverse
 *
 * Return: 0
 */

int main(void)
{
	int letters;

	for (letters = 122; letters >= 97; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
