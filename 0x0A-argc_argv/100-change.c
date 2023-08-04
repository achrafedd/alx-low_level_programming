#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: length of @argv
 * @argv: array of elements
 *
 * Return: 0 Alwais
 */
int main(int argc, char *argv[])
{
	int amount, coins, i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = strtol(argv[1], &p, 10);
	coins = 0;

	if (!*p)
	{
		while (amount > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (amount >= cents[i])
				{
					coins += amount / cents[i];
					amount = amount % cents[i];
				}
			}
		}
		if (amount == 1)
			coins++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coins);
	return (0);
}
