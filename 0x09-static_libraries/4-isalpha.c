#include "main.h"
/**
 * _isalpha - if alppha
 *@c: inserted var
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		return (0);
	}
