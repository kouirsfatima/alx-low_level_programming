#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */
void __attribute__ ((constructor)) bmain()
{
    printf("\nYou're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
