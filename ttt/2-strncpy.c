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
		int lenSrc;

		lenSrc = 0;
		while (src[lenSrc])
			lenSrc++;
		for (c = 0 ; c < n; c++)
		{
			if (c >= lenSrc)
				dest[c] = '\0';
			else
				dest[c] = src[c];
		}
		return (dest);
	}
