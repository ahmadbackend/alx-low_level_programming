/**
 * leet - check the code for
 *@str: string to be replaced
 * Return: Always 0.
*/
char *leet(char *str)
	{
		int counter, i, j;
		char replacer[5][2] = {{'a','4'}, {'e','3'}, {'o','0'}, {'t','7'}, {'l','1'}};
		
		counter = 0;
		while (str[counter] != '\0')
		{
			for (i = 0 ;i < 5 ; i++)
			{
				if (str[counter] == replacer[i][0] || str[counter] + 32 == replacer[i][0])
				{
					str[counter] = replacer[i][1];
				}
			}
			counter++;
		}
		return (str);
	}
