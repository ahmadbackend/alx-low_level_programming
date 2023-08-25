/**
 * leet - check the code for
 *@str: string to be replaced
 * Return: Always 0.
*/
char *leet(char *str)
	{
		int counter, i;
		char replacer[5][2] = {{'a', '4'}, {'e', '3'},
			{'o', '0'}, {'t', '7'}, {'l', '1'}};

		for (counter = 0; str[counter] != '\0'; counter++)
		{
			for (i = 0 ; i < 5 ; i++)
			{
				if (str[counter] == replacer[i][0] || str[counter] + 32 == replacer[i][0])
					str[counter] = replacer[i][1];
			}
		}
		return (str);
	}
