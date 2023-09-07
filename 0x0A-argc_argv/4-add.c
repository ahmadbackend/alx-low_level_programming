#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *@argc: number of arguments
 *@argv: vector of arguments
 * Return: always success
*/
int main(int argc, char *argv[])
	{
		int sum;
		int i;

		sum = 0;
		for (i = 1 ; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
				sum = sum + atoi(argv[i]);
			else if (atoi(argv[i]) < 0)
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
