#include "main.h"
/**
 * more_numbers- Entry point
 * Return: Always 0 (Success)
*/
void more_numbers(void)
	{
		int lines;
		int dig;
		int firstP;
		int remin;

		remin = -1;
		for (lines = 0 ; lines < 10; lines++)
		{
			for (dig = 0 ; dig <= 14 ; dig++)
			{
				if (dig >= 10)
				{
					firstP = dig / 10;
					remin = dig % 10;
				}
				else
				{
					firstP = dig;
				}
				_putchar('0' + firstP);
				if (remin != -1)
					_putchar('0' + remin);
			}
			_putchar('\n');
			remin = -1;
		}
	}
