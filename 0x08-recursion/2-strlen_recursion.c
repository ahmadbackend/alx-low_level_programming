/**
 * strlen_recursion - method to return the length
 *@s: string that we need its length
 * return: string length
*/
int _strlen_recursion(char *s)
	{
		int i;

		i = 1;
		if (*s > '\0')
			return (i + _strlen_recursion(s + 1));
		return (0);
	}
