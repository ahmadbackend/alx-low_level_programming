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
		char low = 'a';
		char upper = 'A';

		for (low = 'a'; low <= 'z'; low++)
		{
			putchar(low);
		}
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			putchar(upper);
		}
		putchar('\n');
		return (0);
	}
