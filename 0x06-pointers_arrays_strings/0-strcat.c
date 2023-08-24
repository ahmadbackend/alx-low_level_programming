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
		bool isEnded;

		disSize = 0;
		copy = 0;
		isEnded = false;
		while (dest[disSize] != '\0')
			disSize++;
		while (isEnded != true)
		{
			dest[disSize + 1] = src[copy];
			if (src[copy] == '\0')
				isEnded = true;
			copy++;
		}
		return (dest);
	}
