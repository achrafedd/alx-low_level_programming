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
	
	if (S[i] == '+' || S[i] == '-')
	{
		if (S[i] == '-') {
			sign = -1;
		}
		i++;
	}

	while (S[i] && (S[i] >= '0' && S[i] <= '9'))
	{
		num = num * 10 + (S[i] - '0');
		i++;
	}

	return sign * num;
}
