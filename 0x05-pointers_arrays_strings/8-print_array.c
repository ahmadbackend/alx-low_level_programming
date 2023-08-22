#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code for
 * @n: array size
 *@a: pointer to the array
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
			if (pcount < n - 1)
				printf("%d, ", dig);
			else
				printf("%d", dig);
		}
		printf("\n");
	}
