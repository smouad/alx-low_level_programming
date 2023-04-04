#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
    int count = 0, i, j;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != 32)
        {
            j = 0;
            while (accept[j] != '\0')
            {
                if (s[i] == accept[j])
                    count++;
                j++;
            }
        }
        else
            return (count);
        i++;
    }
    return (count);
}
