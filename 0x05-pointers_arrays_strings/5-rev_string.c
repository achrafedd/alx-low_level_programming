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
	int i, len, j;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		a = s[i];
		s[i] = s[j];
		s[j--] = a;
	}
}
