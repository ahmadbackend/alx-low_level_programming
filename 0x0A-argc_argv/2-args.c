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
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
	}
