#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: insrted value
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
	{
		float  reminder;
		int retuned;
		int remov;

		remov = n / 10;
		reminder = n / 10.0;
		retuned = (reminder - remov) *  10;
		if (n >= 0)
		{
			_putchar('0' + retuned);
		}
		else
		{
			_putchar('-');
			retuned = retuned * -1;
			_putchar('0' + retuned);
		}

		return (retuned);
	}
