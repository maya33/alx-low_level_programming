#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: number of argument counter
 * @argv: number of argument vector
 * Return: 1 if not enough arguments 
 */
int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 1 || argc == 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		b = 1;
		for (a = 1, b < 3; a++)
			b *= atoi(argv[a]);
		printf("%d\n", b);
	}
	return (0);
}
