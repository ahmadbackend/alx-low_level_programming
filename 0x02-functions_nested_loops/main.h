#include <unistd.h>
#include "main.h"
/**
 * _putchar - implementation point
 *@c: character to print
 * Return: Always number  (Success)
*/
int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
