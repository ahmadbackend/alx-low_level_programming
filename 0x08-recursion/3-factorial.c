/**
 * factorial: function to return the factorial number
 *@n: the input value
 * Return: factorial value
*/
int factorial(int n)
	{
		if (n > 0)
			return (n * factorial(n - 1));
		if (n == 0)
			return (1);
		return (-1);
	}
