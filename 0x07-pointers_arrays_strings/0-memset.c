/**
 * _memset - prints buffer in hexa
 *@n: the amount to be filled
 *@s: the address of memory to print
 *@b: the character to be printed
 *
 * Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
	{
		unsigned int i;

		i = 0;
		while ( i < n)
		{
			*(s+i) = b;
			i++;
		}
		return (s);
	}
