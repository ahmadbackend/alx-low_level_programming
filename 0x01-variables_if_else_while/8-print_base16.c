#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
	{
		int i = 0;
		char low = '0';
		char fir = 'a';

		for (i = 0 ; i < 16 ; i++)
		{
			if (i < 10)
			{
				putchar(low);
				low++;
			}
			else
			{
				putchar(fir);
				fir++;
			}
		}
		putchar('\n');
		return (0);
	}
