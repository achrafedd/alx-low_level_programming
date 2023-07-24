#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 *
 * Return: 0
 */

int main(void)
{
    char pass[17];
    int i, sum = 0, val;
    
    srand(time(NULL));

    for (i = 0; i < 16; i++)
    {
        val = rand() % 52;
        if (val < 26) 
        {
            val += 'a';
        } 
        else
        {
            val -= 26;
            val += 'A';
        }
        pass[i] = val;
        sum += val;
    }

    pass[16] = '\0';
    
    printf("%s\n", pass);

    return (0);
}
