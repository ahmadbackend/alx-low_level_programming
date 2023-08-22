#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
*/
void print_array(int *a, int n)
	{
		int pcount;
		int dig;

		dig = 0;
		for (pcount = 0; pcount < n; pcount++)
		{
			dig = *(a + pcount);
			printf("%d, ", dig);
		}
		_putchar('\n');
	}
