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
int main(void)
{
	int n;
	int dividedWithout;
	float afterDiv;
	int lastDig;
	char initialPart[30];
	char trail[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	dividedWithout = (int) n / 10;
	afterDiv = n / 10.0;
	lastDig = (afterDiv - dividedWithout) * 10;
	strcpy(initialPart, "Last digit of ");

	if (lastDig > 5)
	{
		strcpy(trail, "and is greater than 5");
		printf("%s%d is %d %s\n", initialPart, n, lastDig, trail);
	}
	if (lastDig == 0)
	{
		strcpy(trail,  "and is 0");
		printf("%s%d is %d %s\n", initialPart, n, lastDig, trail);
	}
	if (lastDig < 6 && lastDig != 0)
	{
		strcpy(trail, "and is less than 6 and not 0");
		printf("%s%d is %d %s\n", initialPart, n, lastDig, trail);
	}
	return (0);
}
