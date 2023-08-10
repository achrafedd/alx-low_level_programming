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
	unsigned int i, len1 = 0, len2 = 0, len;
	char *str;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (len > n)
		len = n;
	s = malloc(sizeof(char) * (len1 + len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len; i++)
		s[i + len1] = s2[i];
	s[len1 + len] = '\0';
	return (s);
}
