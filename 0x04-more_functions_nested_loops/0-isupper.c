#include "main.h"

/**
 * _isupper - check character if it's upper
 * 
 * @c: the character to check
 * 
 * Return: 1 if it's upper or 0 if it's lower
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0);
}