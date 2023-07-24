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
	int num, i = 0, sign = 1;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-') {
			sign = -1;
		}
		i++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return sign * num;
}
