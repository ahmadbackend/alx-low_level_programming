#include "main.h"
/**
 * print_square- Entry point
 *@size: size of square
 * Return: Always 0 (Success)
*/
void print_square(int size)
	{
		int row;
		int col;

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}
		for (row = 0 ; row < size ; row++)
		{
			for (col = 0 ; col < size ; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
