#include <stdio.h>
#include "main.h"

/**
 * main: a program that prints the number of arguments passed into it
 * @argc: number of argument counter
 * @argv: number of argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (j = 0; *argv; j++, argv++);
		printf("%d\n", j - 1);
	}
	return (0);
}
