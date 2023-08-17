#include "main.h"
/**
 * print_diagonal- Entry point
 *@n: the diagonal length
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
	{
		int cha;
		int spac;

		for (cha = 1 ; cha <= n ; cha++)
		{
			for (spac = 1 ; spac < cha ; spac++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		if (n <= 0)
			_putchar('\n');
	}
