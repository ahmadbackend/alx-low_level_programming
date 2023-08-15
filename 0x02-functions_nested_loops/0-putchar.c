#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
	{
		char str[] = "_putchar";
		int ch;

		for (ch = 0; ch < strlen(str); ch++)
			_putchar(str[ch]);
		_putchar('\n');
		return (0);
	}
