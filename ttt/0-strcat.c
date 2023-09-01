#include <stdbool.h>
/**
 * _strcat - check the code
 *@src: the string to be copied
 *@dest: string final after coping
 * Return: Always 0.
*/
char *_strcat(char *dest, char *src)
	{
		int disSize;
		int copy;

		disSize = 0;
		while (dest[disSize])
			disSize++;
		for  (copy = 0; src[copy]; copy++)
			dest[disSize++] = src[copy];
		return (dest);
	}
