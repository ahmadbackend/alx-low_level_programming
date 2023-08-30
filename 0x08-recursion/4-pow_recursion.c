/**
 * _pow_recursion - use recursion as power
 *@x: the number
 *@y: the power
 * Return: return s to power of y
*/
int _pow_recursion(int x, int y)
	{
		if (y > 0)
			return (x * _pow_recursion(x, y - 1));
		else if (y == 0)
			return (1);
		else
			return (-1);
	}
