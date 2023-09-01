#include "main.h"
/**
 * _islower - Entry point
 *@c: value to be insrted
 * Return: Always 0 (Success)
*/
int _islower(int c)
	{
		if (c <=  'z' && c >= 'a')
			return (1);
		return (0);
	}
