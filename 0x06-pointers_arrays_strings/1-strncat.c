/**
 * _strncat - check the code
 *@n: size t obe copied
 *@src: the string to be copied
 *@dest: string final after coping
 * Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
	{
		int disSize;
		int copy;
		
		disSize = 0;
		copy = 0;
		while (dest[disSize] != '\0')
			disSize++;
		while (disSize < n && src[copy] != '\0')
		{
			dest[disSize + 1] = src[copy];
			copy++;
		}
		return (dest);
	}
