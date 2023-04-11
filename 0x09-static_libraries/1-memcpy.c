#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: refers to one of memory variables
 * @src: refers to the second memory variable
 * *@n: depicts the value of bytes
 * Return: The newly created memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        int r = 0;
        int i = n;

        for (; r < i; r++)

        {
        dest[r] = src[r];
        n--;
        }
        return (dest);
}
