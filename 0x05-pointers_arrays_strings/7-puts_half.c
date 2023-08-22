#include "main.h"

/**
 * puts_half - check the code
 *@str: characters to be printed
 * Return: Always 0.
*/
void puts_half(char *str)
	{
		int counter, length;

		counter = 0;
		length = 0;
		while (str[length] != '\0')
			length++;
		if (length % 2 != 0)
			counter = (length - 1) / 2;
		else
			counter = length / 2;
		while (str[counter] != '\0')
		{
			_putchar(str[counter]);
			counter++;
		}
		_putchar('\n');
	}
