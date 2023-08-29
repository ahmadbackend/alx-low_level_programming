#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 *@size: sub array length
 *@a: pointer to aeeay start
 * Return: Always 0.
*/
void print_diagsums(int *a, int size)
	{
		int left, right, i;

		left = 0;
		right = 0;
		for (i = 0 ; i < size ; i++)
		{
			left = left + a[i];
			right = right + a[size - 1 - i];
			a += size;
		}
		printf("%d, %d\n", left, right);
	}
