#include <string.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: the result string
 * @src: the source string
 *
 * Return: the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest), i;
	int n = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest += '\0';

	return (dest);
}
