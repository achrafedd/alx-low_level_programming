#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: pointer of the array
 */
char *argstostr(int ac, char **av)
{
	int i, k;
	unsigned int j, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			len++;
		}
	}

	str = (char *)malloc(len + ac + 1);

	if (!str)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}

	str += '\0';
	return (str);
}
