#include "main.h"
/**
 * times_table - if alppha
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
	{
		int outer;
		int inner;
		int counter;
		int totalNum;
		int reminder;
		int floored;

		counter = 0;
		for (outer = 0 ; outer <= 9 ; outer++)
		{
			for (inner = 0 ; inner <= 9 ; inner++)
			{
				totalNum = inner * counter;
				if (totalNum >= 10)
				{
					floored = totalNum / 10;
					reminder = totalNum % 10;
					_putchar(floored + '0');
					_putchar(reminder + '0');
				}
				else
				{
					_putchar(totalNum + '0');
				}
				if (inner < 9)
				{
					_putchar(',');
					if ((inner + 1) * counter < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((inner + 1) * counter >= 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
			counter++;
		}
	}
