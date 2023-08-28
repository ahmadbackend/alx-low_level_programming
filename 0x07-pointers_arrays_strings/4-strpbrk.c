/**
 * _strpbrk - check the code
 *@s: string to be searched for the subset
 *@accept: string to be searched for presence of any oth them
 * Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
	{
		unsigned int i, j, min;
		
		min = 10000;
		for (i = 0 ; s[i] != '\0'; i++)
		{
			for (j = 0 ; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					return (s[i]);
			}
		}
		return (0);
	}
