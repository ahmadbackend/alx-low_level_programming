/**
 * _strchr - check the code
 *@s: string that we search for the character in
 *@c: the searched character
 * Return: Always 0.
*/
char *_strchr(char *s, char c)
	{
		int i;

		i = 0;
		while (s[i] != '\0')
		{
			if (*(s + i) == c)
				return (s + i);
			i++;
		}
		return (0);
	}
