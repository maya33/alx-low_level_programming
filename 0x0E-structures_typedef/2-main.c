#include <stdio.h>
#include "dog.h"

/**
 * main - checking the code to run
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Kandapatali";
    my_dog.age = 15;
    my_dog.owner = "Peter Jere";
    print_dog(&my_dog);
    return (0);
}
