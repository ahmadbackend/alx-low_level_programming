#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
	{
		char test = 'a';

		for (test = 'a' ; test < 'z' ; test++)
		{
			putchar(test);
			putchar('\n');
		}
		return (0);
	}
