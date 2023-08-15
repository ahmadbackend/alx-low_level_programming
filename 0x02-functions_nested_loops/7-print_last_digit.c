#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: insrted value
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
	{
		int retuned;

		if (n >= 0)
		{
			retuned = n % 10;
		}
		else
		{
			retuned = -1 * (n % 10);
		}
		_putchar(retuned + '0');
		return (retuned);
	}
