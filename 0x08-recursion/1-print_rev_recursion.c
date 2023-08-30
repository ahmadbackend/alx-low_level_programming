#include "main.h"
/**
 * _print_rev_recursion - check the code
 *@s: string pointer
 * Return: Always 0.
*/
void _print_rev_recursion(char *s)
	{
		if (*s != '\0')
		{
			s = s + 1;
			_print_rev_recursion(s);
		}
		_putchar(*s);
	}
