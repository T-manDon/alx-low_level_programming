#include "main.h"

/**
 * _strstr - marks the begining of the code
 * @haystack: this refers to the first input variable
 * @needle: this is the second input variable
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)

{
        for (; *haystack != '\0'; haystack++)

        {

        char *l = haystack;
        char *p = needle;

        while (*l == *p && *p != '\0')

        {
        l++;
        p++;
        }

        if (*p == '\0')
        return (haystack);

        }

        return (0);
}
