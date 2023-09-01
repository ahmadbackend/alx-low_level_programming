/**
 * is_prime - function to find the prime number
 *@n: the number to be investigated
 * Return: yes or no
*/
int is_prime_number(int n)
	{
		return (internal((2, n));
	}
/**
 * internal - nest function to find prime
 *@i: iterator
 *@k: the number
 * Return: yes or no
*/
int internal(int i, int k)
	{
		if (i > k)
			return (0);
		if (k % i == 0 && k > i)
			return (0);
		else if (i == k)
			return (1);
		else
			return (internal(i + 1, k));
	}
