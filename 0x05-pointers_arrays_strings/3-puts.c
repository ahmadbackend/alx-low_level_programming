/**
 * _puts - check the code
 *@str: string to be printed
 * Return: Always 0.
*/
void _puts(char *str)
	{
		int counter;

		for (counter = 0; *str != '\0'; str++)
			printf("%c", *str);
	}
