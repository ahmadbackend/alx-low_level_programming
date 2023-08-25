#include <stdbool.h>
/**
 * cap_string - check the code
 *@str: string to be capitalized
 * Return: Always 0.
*/
char *cap_string(char *str)
	{
		int i;
		bool isFound;

		isFound = false;
		for ( i = 0 ; str[i] != '\0'; i++)
		{
			if (str[i] >= 97 && str[i] <= 122 &&
					(isFound || i ==0))
			{
				str[i] = str[i] - 32;
				isFound = false;
			}
			if (!isFound && (str[i] == ',' || str[i] ==':'
						|| str[i] == '.'
						|| str[i] == ' '
						|| str[i] == '!'
						|| str[i] == '?'
						|| str[i] == '"'
						|| str[i] == '('
						|| str[i] == ')'
						|| str[i] =='{'
						|| str[i] =='}'))
				isFound = true;
		}
		return (str);
	}
