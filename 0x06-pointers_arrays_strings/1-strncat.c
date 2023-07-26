#include <string.h>

/**
 * _strncat - concatinates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of second string to concateinate
 *
 * Return: @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest += '\0';

	return (dest);
}
