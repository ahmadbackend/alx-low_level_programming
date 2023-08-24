/**
 * _strncat - check the code
 *@dest: distination string
 *@src: source string 
 *@n: size to be copied
 * Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
	{
		int c;
		int d;
		int limit;

		d = 0;
		limit = 0;
		while (dest[d])
			d++;
		for (c = 0; src[c]; c++)
		{
			if (limit <= n)
				dest[d++] = src[c];
			else
				break;
			limit++;
		}
		return (dest);
	}
