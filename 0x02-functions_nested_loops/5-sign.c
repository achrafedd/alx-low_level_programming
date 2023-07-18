#include "main.h"

/**
 * print_sign - print the sign of number
 *
 * @n: number
 *
 * Return: 1 if number is grater then 0 and 0 if number is 0 and -1 if
 * number is smuller then 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if(n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
