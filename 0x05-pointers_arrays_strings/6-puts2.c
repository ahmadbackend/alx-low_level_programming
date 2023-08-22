#include "main.h"
/**
 * puts2 - check the code
 *@str: the character to be printed
 * Return: Always 0.
*/
void puts2(char *str)
	{
		int cha;

		cha = 0;
		while (str[cha] != '\0')
		{
			if (cha % 2 == 0)
				_putchar(str[cha]);
			cha++;
		}
		_putchar('\n');
	}		
