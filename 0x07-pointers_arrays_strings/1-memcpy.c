/**
 * _memcpy - prints buffer in hexa
 *@n : the amount to be copied
 *@dest: the address of returned string
 *@src: address of copied string
 *
 * Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
	{
		unsigned i;

		i = 0;
		while (i < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		return (dest);
	}
