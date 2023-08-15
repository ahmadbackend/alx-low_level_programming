#include "main.h"
/**
 * print_alphabet_x10 - print ten times alphapets
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
	{
		int ch;
		int ten;

		for (ten = 0 ; ten < 10 ; ten++)
		{
			for (ch = 'a' ; ch <= 'z' ; ch++)
			{
				_putchar(ch);
			}
			_putchar('\n');
		}
	}
