#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 *
 * @n: number
 * @guess: guessing number
 *
 * Return: the natural square root of a number
 */

int _sqrt(int n, int guess)
{
	int square = guess * guess;

	if (square > n)
		return (-1);
	if (n != square)
		return (_sqrt(n, guess + 1));

	return (guess);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 1));
}
