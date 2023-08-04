#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i, n, result = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], &c, 10);
		if (!*c)
		{
			result += n;
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
