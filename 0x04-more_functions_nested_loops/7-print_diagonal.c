#include "main.h"
/**
 * print_diagonal- Entry point
 *@n: the diagonal length
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
	{
		int cha;

		for (cha = 0 ; cha < n ; cha++)
			_putchar(' ');
		if (n > 0)
			_putchar(92);
		_putchar('\n');
	}
