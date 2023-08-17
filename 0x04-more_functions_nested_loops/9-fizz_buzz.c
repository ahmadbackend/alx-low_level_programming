#include <stdio.h>
#include <string.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
	{
		int start;

		for (start = 1 ; start <= 100; start++)
		{
			if (start % 3 == 0 || start % 5 == 0)
			{
				if (start % 3 == 0 && start % 5 != 0)
					printf("Fizz");
				else if (start % 5 == 0 && start % 3 != 0)
					printf("Buzz");
				else if (start % 5 == 0 && start % 3 == 0)
					printf("FizzBuzz");
			}
			else
				printf("%d", start);
			if (start != 100)
				printf(" ");
		}
		printf("\n");
		return (0);
	}
