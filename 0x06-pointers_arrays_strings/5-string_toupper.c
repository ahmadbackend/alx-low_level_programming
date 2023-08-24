/**
 * string_toupper - check the code
 *@str: letter to be uppercased
 * Return: Always 0.
*/
char *string_toupper(char *str)
	{
		int ch;

		ch = 0
		while (*(str + ch) != '\0')
		{
			if (*(str + ch) >= 97 && *(str + ch) <= 122)
				*(str + ch) = *(str + ch) - 32;
			ch++;
		}
	}
