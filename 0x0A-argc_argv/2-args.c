#include <stdio.h>

/**
 * main - print all args
 *
 * @argc: length of @argv
 * @argv: array of elements
 *
 * Return: 0 Alwais
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}