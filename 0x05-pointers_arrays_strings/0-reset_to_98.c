#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
    {
        
        *n = 98;
      
    }
    int main(void)
        {
            int j = 8985;
            reset_to_98(&j);
            printf("%d", j);
            return 0;
        }