#include "main.h"

/**
 * is_prime - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number
 * @i: remainder
 *
 * Return: 1 if the input integer is a prime number
 */
int is_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number
 *
 * Return: 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (is_prime(n, 2));
}
