#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	 int chin1[] = {'a', 'e', 'o', 't', 'l'};
    int loww[] = {'A', 'E', 'O', 'T', 'L'};
    int numbers[] = {52, 51, 48, 55, 49};
    int upp = 0;
    int i = 0;

    while (*(s + upp) != '\0')
    {
        while (i < 5)
        {
            if (*(s + upp) == chin1[i] || *(s + upp) == loww[i])
            {
                *(s + upp) = numbers[i];
                break;
            }
            i++;
        }
        upp++;
    }

    return (s);
}
