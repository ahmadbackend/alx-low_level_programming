#include "main.h"

/**
 * print_rev - check the code
 *@s: string to be printed reversely
 * Return: Always 0.
*/
void print_rev(char *s)
	{
		int countEnd;

		for (countEnd = 0 ; *s != '\0' ; s++)
			countEnd++;
		while (countEnd >= 0)
		{
			_putchar(s[countEnd] + 0);
			countEnd--;
		}
		_putchar('\n');
	}
