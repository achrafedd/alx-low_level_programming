#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add numbers
 *
 * @argc: length of @argv
 * @argv: array of elements
 *
 * Return: 0 Alwais
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
