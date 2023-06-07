#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Kandapatali";
    my_dog.age = 15;
    my_dog.owner = "Peter Jere";
    printf("My name is %s, and I am %.1f :) - Whoa whoa!\n", my_dog.name, my_dog.age);
    return (0);
}
