/**
 * _strchr - check the code
 *@s: string that we search for the character in
 *@c: the searched character
 * Return: Always 0.
*/
char *_strchr(char *s, char c)
	{
		int i;

		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
				return (s + i);
		}
		return ('\0');
	}
