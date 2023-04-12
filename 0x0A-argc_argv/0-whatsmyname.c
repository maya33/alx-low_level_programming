#include <stdio.h>

/**
 * main:function that  prints the name of the program
 * @argc: number of command line argument counter
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
