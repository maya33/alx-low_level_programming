#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-128) * 20;
    j = ABS(128) * 20;
    printf("%d, %d\n", i, j);
    return (0);
}
