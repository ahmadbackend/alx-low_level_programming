#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: insrted value
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
	{
		int reminder;

		reminder = n % 10;
		_putchar(reminder);
		return (n % 10);
	}
