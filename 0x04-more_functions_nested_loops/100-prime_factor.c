#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *main- Entry point
 * @n:repeteation number
 * Return: Always 0 (Success)
*/
int main(void)
{
    long int sqr;
    long int i;

    sqr = sqrt(612852475143);

    for (i = sqr-1 ; i >= 2 ; i--)
    {
        if ( i > 3)
        {
            if (sqr % i ==0 && i % 2 != 0 && i % 3 != 0
            && i % 5 != 0 && i % 7 != 0)
            {
                printf("%ld", i);
                return (0);
            }
        }
        else if ( i <= 3)
        {
            if (sqr % 3 == 0)
            {
                printf("%d", 3);
                return (0);
            }
            if (sqr % 2 == 0)
            {
                printf("%d", 2);
                return (0);
            }
                
        }
    }
    return (0);
}