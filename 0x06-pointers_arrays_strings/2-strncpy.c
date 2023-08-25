/**
 * _strncpy - check the code
 *@n: number of character to be copied
 *@src: source string
 *@dest: destination string
 * Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
	{
		int c;

		for (c = 0 ; c < n; c++)
		{
			dest[c] = src[c];
			if (src[c] == '\0')
				break;
		}
		return (dest);
	}
