#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * FizzBuzz- Entry point
 * Return: Always 0 (Success)
*/
void FizzBuzz(void)
	{
		int start;

		for (start = 1 ; start <= 100; start++)
		{
			if (start % 3 == 0 || start % 5 == 0)
			{
				if (start % 3 == 0)
					printf("%s", "Fizz");
				if (start % 5 == 0)
					printf("%s", "Buzz");
			}
			else
				printf("%d", start);
			_putchar(' ');
		}
		printf("\n");
	}
