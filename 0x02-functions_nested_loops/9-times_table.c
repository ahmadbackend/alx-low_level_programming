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

		counter = 0;
		for (outer = 0 ; outer <= 9 ; outer++)
		{
			for (inner = 0 ; inner <= 9 ; inner++)
			{
				_putchar((inner * counter) + '0');
			}
			_putchar('\n');
			counter++;
		}
	}
