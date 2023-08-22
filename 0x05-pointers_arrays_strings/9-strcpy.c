#include "main.h"
/**
 * _strcpy - check the code
 *@src: source string
 *@dest: the destination string
 * Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
	{
		int length;
		int counter;

		length = 0;
		while (src[length])
			length++;
		for (counter = 0 ; counter <= length; counter++)
			dest[counter] = src[counter];
		return (dest);
	}
