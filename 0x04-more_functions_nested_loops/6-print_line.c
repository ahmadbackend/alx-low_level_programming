#include "main.h"
/**
 * print_line- Entry point
 * @n:repeteation number
 * Return: Always 0 (Success)
*/
void print_line(int n)
	{
		int start;
		
		for (start = 0 ; start < n ; start++)
			_putchar('_');
		_putchar('\n');
	}
