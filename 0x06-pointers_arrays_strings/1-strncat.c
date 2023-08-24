/**
 * _strncat - check the code
 *@dest: distination string
 *@src: source string
 *@n: size to be copied
 * Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
	{
		int d;
		int limit;

		d = 0;
		while (dest[d])
			d++;
		for (limit = 0; limit < n && src[c] != '\0'; limit++)
			dest[d + limit] = src[limit];
		return (dest);
	}
