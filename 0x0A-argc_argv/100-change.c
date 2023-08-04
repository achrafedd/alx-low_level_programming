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
	int amount, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	amount = 0;

	if (cents == 0 || strcmp(argv[1], "0") != 0)
	{
		printf("Error\n");
		return (1);
	}

	while (cents)
	{
		if (!(cents - 25 < 0))
		{
			cents -= 25;
			amount += 1;
		}
		else if (!(cents - 10 < 0))
		{
			cents -= 10;
			amount += 1;
		}
		else if (!(cents - 5 < 0))
		{
			cents -= 5;
			amount += 1;
		}
		else if (!(cents - 2 < 0))
		{
			cents -= 2;
			amount += 1;
		}
		else if (!(cents - 1 < 0))
		{
			cents -= 1;
			amount += 1;
		}
	}

	printf("%d\n", amount);
	return (0);
}
