#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * getReminder - twist pointpoint
 * num -  unmber
 * divisor -  divisor
*/
int main(void)
	{
		int first;
		int second;
		int third;
		int comma;
		int space;

		first = '0';
		second = '1';
		third = '2';
		comma = ',';
		space = ' ';
		for (first = '0' ; first <= '9' ; first++)
		{
			for (second = first + 1 ; second <= '9' ; second++)
			{
				for (third = second + 1 ; third <= '9' ; third++)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first < '7')
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
		putchar('\n');
		return (0);
	}
