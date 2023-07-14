#include <stdio.h>

/**
 * main - Print lower case letters insted of q and e
 *
 * Return: 0
 */

int main(void)
{
	int letters;

	for (letters = 97; letters <= 122; letters++)
	{
		if (letters == 101 || letters == 113)
		{
			continue;
		}

		putchar(letters);
	}

	putchar('\n');

	return (0);
}
