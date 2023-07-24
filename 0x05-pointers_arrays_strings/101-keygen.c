#include <stdio.h>
#include <stdlib.h>

/**
 * main - create random password
 *
 * Return: 0
 */
int main(void)
{
	char pass[16], val;
	int i;

	for (i = 0; i < 16; i++)
	{
		val = rand() % 52;

		if (val < 26) {
			val += 'a';
		} else
		{
			val -= 26;
			val += 'A';
		}

		pass[i] = val;
	}

	printf("%s\n", pass);
	return (0);
}
