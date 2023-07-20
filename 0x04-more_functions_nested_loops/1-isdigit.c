#include "main.h"

/**
* _isdigit - check if a number
* @c: number
* Return: 1 if the number is valid, 0 otherwise
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

