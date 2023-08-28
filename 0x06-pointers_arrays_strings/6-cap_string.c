#include <stdbool.h>
/**
 * cap_string - check the code
 *@str: string to be capitalized
 * Return: Always 0.
*/
char *cap_string(char *str)
	{
		int i, j;
		bool isFound;
		char spaces[] = " ;.!?\"(){}\n\t,";

		isFound = false;
		for ( i = 0 ; str[i] != '\0'; i++)
		{
			for (j = 0 ; j < 13 ; j++)
			{
				if (str[i] == spaces[j])
				{
					isFound = true;
					break;
				}
			}
			if ((i == 0 || isFound == true) && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] = str[i] - 32;
				isFound = false;
			}
			isFound = false;
		}
		return (str);
	}
