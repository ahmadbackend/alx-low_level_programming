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

		for (hl = 0 ; hl <= 23 ; hl++)
		{
			for (ml = 0 ; ml <= 59 ; ml++)
			{
				if (hl < 10)
					_putchar(0 + '0');
				_putchar(hl + '0');
				_putchar(':');
				if (ml < 10)
					_putchar(0 + '0');
				_putchar(ml + '0');
				_putchar('\n');
			}
		}
	}
