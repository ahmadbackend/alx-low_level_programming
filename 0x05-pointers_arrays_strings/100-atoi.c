#include <stdbool.h>
/**
 * _atoi - check the code
 *@s: string to search for integers
 * Return: Always 0.
*/
int _atoi(char *s)
	{
		int signcounter;
		int itera;
		unsigned int number;
		bool fnum;

		signcounter = 0;
		itera = 0;
		number = 0;
		fnum = false;
		while (s[itera] != '\0')
		{
			if (s[itera] == 45)
				signcounter++;
			if (s[itera] >= 48 && s[itera] <= 57)
			{
				number = number * 10 + s[itera] - '0';
				fnum = true;
			}
			if (fnum && (s[itera] < 48 || s[itera] > 57))
				break;
			itera++;
		}
		if (signcounter % 2 != 0)
			return (number * -1);
		return (number);
	}
