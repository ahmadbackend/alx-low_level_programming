/**
 * _strlen - return string length
 *@s: the start point of the string
 * Return: Always 0.
*/
int _strlen(char *s)
	{
		int length;

		for (length = 0; *s != '\0'; s++)
			length++;
		return (length);
	}
