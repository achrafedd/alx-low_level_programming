#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 *
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 Alwais
*/
int main(int ac, char *av[])
{
	int n1, n2;
	int (*calc)(int, int);
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = av[2];

	if (strcmp(op, "+") != 0 &&
		strcmp(op, "-") != 0 &&
		strcmp(op, "*") != 0 &&
		strcmp(op, "/") != 0 &&
		strcmp(op, "%") != 0
	)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);

	if ((strcmp(op, "/") != 0  && n2 == 0) || (strcmp(op, "%") != 0 && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(op);

	printf("%d\n", calc(n1, n2));

	return (0);
}
