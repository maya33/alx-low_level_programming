#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * main -  program that adds positive numbers
 * @argc: number of argument counters
 * @argv: argument vector
 * Return: 1 if a non integer is among the passed arguments
 */

int main(int argc, char *argv[])
{
        int c, d, length, sum;
        char *ptr;
        if (argc < 2)
                printf("0\n");
        else
        {
                sum = 0;
                for (c = 1; c < argc; c++)
                {
                        ptr = argv[c];
                        length = strlen(ptr);

                        for (c = 0; d < length; d++)
                        {
                                if (isdigit(*(ptr + d)) == 0)
                                {
                                        printf("this is a problem\n");
					return (1);
				}
			}
			sum += atoi(argv[]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
