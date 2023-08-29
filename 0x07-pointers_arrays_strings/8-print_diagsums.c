/**
 * print_diagsums - check the code
 *@size: sub array length
 *@s: pointer to aeeay start
 * Return: Always 0.
*/
void print_diagsums(int *a, int size)
	{
		int left, right, i, j;

		left = right = 0;
		for (i = 0 ; i < size ; i++)
			left += a[i][i];
		for (j = size - 1; j >= 0 ; j--)
			right += a[size - j - 1][j];
		printf("%d, %d\n", left, right);
	}
