#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *@argc: number of arguments
 *@argv: vector of arguments
 * Return: always success
*/
int main(int argc, __attribute__((unused))char *argv[])
	{
		printf("%d\n", argc - 1);
		return (0);
	}
