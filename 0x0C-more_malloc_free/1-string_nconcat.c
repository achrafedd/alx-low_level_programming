#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: size
 *
 * Return: poniter of concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, len;
	char *e = '\0';
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (e);

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		len = len1 + len2 + 1;
	else
		len = len1 + n + 1;
	str = (char *)malloc(len);

	if (!str)
		return (NULL);

	for (i = 0, j = 0; i < len; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[j++];
	}

	str += '\0';

	return (str);
}
