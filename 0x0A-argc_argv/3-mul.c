#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: length of @argv
 * @argv: array of elements
 *
 * Return: 0 Alwais
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
