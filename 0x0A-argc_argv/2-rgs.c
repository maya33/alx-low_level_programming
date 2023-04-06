#include <stdio.h>

/**
 * main - All arguments should be printed, including the first one
 * @argc: number of arguments counter
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	for (a = 0; a < argc; a++)
		printf('%d\n", argv[a]);
	return (0);
}
