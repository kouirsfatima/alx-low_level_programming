#include "main.h"
#include <string.h>


/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{

    int slen = strlen(b);
    unsigned int total = 0;
    unsigned int devcal = 1;
	int i;
	 if (b == NULL)
       return 0;

    for ( i = slen - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        if (b[i] == '1')
            total += devcal;

        devcal *= 2;
    }

    return total;
}
