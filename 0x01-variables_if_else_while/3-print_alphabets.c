#include <stdio.h>

/**
 * main - Print lower case letter followed by upper case letters
 *
 * Return: 0
 */

int main(void)
{
	int lower_case, upper_case;

	for (lower_case = 97;lower_case <= 122; lower_case++)
		putchar(lower_case);
	for (upper_case = 65; upper_case <= 90; upper_case++)
		putchar(upper_case);
	putchar('\n');
}
