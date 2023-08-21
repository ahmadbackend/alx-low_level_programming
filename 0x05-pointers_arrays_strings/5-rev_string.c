#include "main.h"
/**
 * rev_string - check the code
 *@s: reversed string
 * Return: Always 0.
*/
void rev_string(char *s)
	{
		int i, l;
		char temp;

		for (i = 0; s[i] != '\0'; ++i)
			;

		for (l = 0; l < i / 2; l++)
		{
			temp = s[l];
			s[l] = s[i - 1 - l];
			s[i - 1 - l] = temp;
		}
	}
