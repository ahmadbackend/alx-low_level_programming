#include <stdio.h>
#include <string.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
	{
		int start;

		char Fizz[] = "Fizz";
		char Buzz[] = "Buzz";
		char FizzBuzz[] = "FizzBuzz";

		for (start = 1 ; start <= 100; start++)
		{
			if (start % 3 == 0 || start % 5 == 0)
			{
				if (start % 3 == 0 && start % 5 != 0)
					printf("%s", Fizz);
				if (start % 5 == 0 && start % 3 != 0)
					printf("%s", Buzz);
				if (start % 5 == 0 && start % 3 == 0)
					printf(FizzBuzz);
			}
			else
				printf("%d", start);
			printf(" ");
		}
		printf("\n");
		return (0);
	}
