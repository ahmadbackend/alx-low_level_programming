#include "main.h"
/**
 * print_triangle- Entry point
 *@size:trianglesize
 * Return: Always 0 (Success)
*/
void print_triangle(int size)
	{
		int space;
		int difference;
		int i;
		int j;

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}
		for (i = 0 ; i < size ; i++)
		{
			difference = size - i;
			for (j = 1 ; j < difference; j++)
				_putchar(' ');
			space = size - difference;
			for (j = 0 ; j <= space ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
