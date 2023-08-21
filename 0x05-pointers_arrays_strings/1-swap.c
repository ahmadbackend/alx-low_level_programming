/**
 * swap_int - check the code
 *@b: second variable
 *@a: first variable
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
	{
		int temp;

		temp = *b;
		*b = *a;
		*a = temp;
	}
