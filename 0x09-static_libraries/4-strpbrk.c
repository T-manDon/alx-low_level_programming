#include "main.h"

/**
 * _strpbrk - this marks the begining of the code
 * @s: this refers to the first variable
 * @accept: this refers to the second variable
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)

{
        int k;

        while (*s)

        {

        for (k = 0; accept[k]; k++)

        {

        if (*s == accept[k])
        return (s);

        }

        s++;

        }

        return ('\0');
}
