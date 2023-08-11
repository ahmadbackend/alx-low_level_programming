#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * getReminder - twist pointpoint
 * num -  unmber
 * divisor -  divisor
*/
int getRemainder(int num, int divisor)
{
	return (num - divisor * (num / divisor));
}
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDig = getReminder(n, 10);
	char initialPart[]  = "Last digit of ";

	if (lastDig > 5)
	{
		char trail[] = "and is greater than 5";

		printf("%s%d is %d %s", initialPart, n, lastDig, trail);
	}
	if (lastDig == 0)
	{
		char trail[] = "and is 0";

		printf("%s%d is %d %s", initialPart, n, lastDig, trail);
	}
	if (lastDig < 6 && lastDig > 0)
	{
		char trail[] = "and is less than 6 and not 0";

		printf("%s%d is %d %s", initialPart, n, lastDig, trail);
	}
	return (0);
}
