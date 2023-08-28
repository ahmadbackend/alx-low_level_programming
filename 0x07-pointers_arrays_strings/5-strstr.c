#include <stdbool.h>
/**
 * _strstr - check the code
 *@haystack: the stack to find the string
 *@needle: the wanted string
 * Return: Always 0.
I*/
char *_strstr(char *haystack, char *needle)
	{
		int i, j, min;
		bool isMatch;

		isMatch = false;
		min = -1;
		for ( i = 0 ; haystack[i] != '\0'; i++)
		{
			min = i;
			for ( j = 0 ; needle[j] != '\0'; j++)
			{
				if (needle[j] == haystack[i] && haystack[i] != '\0')
				{
					i++;
					isMatch = true;
				}
				else if (needle[j] != haystack[i])
					isMatch = false;
			}
			if (isMatch == true)
				return (haystack + min);
		}
		return (0);
	}
