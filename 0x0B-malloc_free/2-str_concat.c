#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len, s1_len = 0, s2_len = 0;
	char *str;

	if (s1 != NULL)
		s1_len = strlen(s1);
	if (s2 != NULL)
		s2_len = strlen(s2);
	len = s1_len + s2_len;
	str = (char *)malloc(len + 1);

	if (!str)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{
		str[s1_len] = s2[i];
		s1_len++;
	}

	str += '\0';

	return (str);
}
