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
		char ls = 'z';

		for (ls = 'z' ; ls >= 'a' ; ls--)
		{
			putchar(ls);
		}
		putchar('\n');
		return (0);
	}

