#include "main.h"

/**
 * print_rev - check the code
 *@s: string to be printed reversely
 * Return: Always 0.
*/
void print_rev(char *s)
	{
		int countEnd;

		countEnd = 0;
		while (s[countEnd])
			countEnd++;

		while (countEnd--)
		{
			_putchar(s[countEnd]);
		}
		_putchar('\n');
	}
