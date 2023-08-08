#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 *
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, i, word;

	flag = 0;
	word = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}

	return (word);
}

/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: words
 */
char **strtow(char *str)
{
	char **words, *word;
	int i, k = 0, len = 0, words_c, c = 0, start, end;

	while (*(str + len))
		len++;
	words_c = count_word(str);
	if (words_c == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (words_c + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				word = (char *)malloc(sizeof(char) * (c + 1));
				if (word == NULL)
					return (NULL);
				while (start < end)
					*word++ = str[start++];
				*word = '\0';
				words[k] = word - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	words[k] = NULL;

	return (words);
}
