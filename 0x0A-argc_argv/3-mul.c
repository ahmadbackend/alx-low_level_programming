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
		int multi;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
