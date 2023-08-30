/**
 * test - internal method
 *@k : the number
 *@i: the root
 *Return: the root
*/
int test(int i, int k)
	{
		if (i * i < k)
		{
			i = i + 1;
			return (test(i, k));
		}
		else if (i * i == k)
			return (i);
		return (-1);
	}

/**
 * _sqrt_recursion - get square root by recursion
 *@n: the desired number
 * Return: sqaure root
*/
int _sqrt_recursion(int n)
	{
		return (test(1, n));
	}
