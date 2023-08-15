#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
*/
void jack_bauer(void)
	{
		int hl;
		int ml;
		int mr;

		for (hl = 0 ; hl <= 23 ; hl++)
		{
			for (ml = 0 ; ml <= 5 ; ml++)
			{
				for (mr = 0 ; mr <= 9; mr++)
				{
					if (hl < 10)
						_putchar(0 + '0');
					_putchar(hl + '0');
					_putchar(':');
					_putchar(ml + '0');
					_putchar(mr + '0');
					_putchar('\n');
				}
			}
		}
	}
