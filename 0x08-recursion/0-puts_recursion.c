#include "main.h"
/**
 * _puts_recursion - check the code
 *@s: the string pointer
 * Return: Always 0.
*/
void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
