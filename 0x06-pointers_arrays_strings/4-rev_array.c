/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
*/
void reverse_array(int *a, int n)
	{
		int counter;
		int temp;

		for (counter = 0 ; counter < n / 2; counter++)
		{
			temp = *(a + counter);
			*(a + counter) = *(a + n - counter - 1);
			*(a + n - 1 -  counter) = temp;
		}
	}
