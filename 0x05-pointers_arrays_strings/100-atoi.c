#include "main.h"

/**
 * _atoi - convert string to number
 *
 * @s: string
 *
 * Return: the converted number or 0 if the string not containing a number
 */

int _atoi(char *s)
{
	int i = 0, j = 0, sign = 1;
	unsigned int res = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			res = (res * 10) + (s[i] - '0');
			i++;
		}

		if (j == 1)
		{
			break;
		}

		i++;
	}

	res *= sign;
	return (res);
}
