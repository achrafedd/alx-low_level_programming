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
	int n = strlen(s) - 1;
	char new_s[n];
	int i, j;

	i = strlen(s) - 1;
	j = 0;

	while (i >= 0)
	{
		new_s[j] = s[i];
		i--;
		j++;
	}

	s = new_s;
}
