#include "main.h"
/**
 *  print_to_98 - print numbers
 *@n: inserted var
 * Return: Always 0 (Success)
*/
/**
 *  lessThan - th hkjsdjksn
 *@en: hkjlds
 *@st: fghs
 * Return: Always 0 (Success)
*/
void lessThan(int st, en)
	{
		int floored;
		int reminder;
		
		for (st ; st <= en ; st++)
		{
			if (st < 0)
			{
				_putchar('-');
				st = st * -1;
			}
			if (st >= 10)
			{
				floored = st / 10;
				reminder = st % 10;
				_putchar(floored + '0');
				_putchar(reminder + '0');
			}
			else
			{
				_putchar(st + '0');
				_putchar(' ');
			}
		}
	}



void print_to_98(int n)
	{
		int start;
		int floored;
		int reminder;
		int end;

		end = 98;
		if (n <= 98)
		{
			lessThan(n, 98);
		}
		else if (n > 98)
		{
			start = n;
			end = 98;
			for (start ; start >= end ; start--)
			{
				floored = started / 10;
				reminder = start % 10;
				_putchar(floored + '0');
				_putchar(reminder + '0');
				_putchar(' );
			}
		}
	}
