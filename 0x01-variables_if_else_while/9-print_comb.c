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
		int  fi = '1';

		for (fi = '0' ; fi <= '9' ; fi++)
		{
			int com = ',';

			putchar(fi);
			if (fi < '9')
			{
				putchar(com);
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
