#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/* more headers goes there */
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
		int comma;
		int space;

		comma = ',';
		space = ' ';
		for (first = '0' ; first <= '9' ; first++)
		{
			for (second = first + 1 ; second <= '9' ; second++)
			{
				putchar(first);
				putchar(second);
				if (first < '8')
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
		putchar('\n');
		return (0);
	}


