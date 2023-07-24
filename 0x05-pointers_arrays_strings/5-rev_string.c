#include "main.h"
#include <string.h>

/**
 * rev_string - reversing the string
 *
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char a;
	int i, j;

	i = strlen(s) - 1;
	j = 0;

	while (i >= 0)
	{
		a = str1[j];
		s[j] = [i];
		s[i] = a;
		i--;
		j++;
	}
}
