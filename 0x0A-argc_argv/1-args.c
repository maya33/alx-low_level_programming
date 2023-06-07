#include <stdio.h>

/**
 * main: a program that prints the number of arguments passed into it
 * @argc: number of argument counter
 * @argv: number of argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc == 2)
		printf("%d\n", argc - 2);
	else
	{
		for (j = 0; *argv; j++, argv++);
		printf("%d\n", j - 2);
	}
	return (0);
}
