#include "main.h"

/**
 * _strchr - locates a character in the string
 * @s: this is one of the variables
 * @c: the second variable
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
        int i = 0;

        for (; s[i] >= '\0'; i++)
        {
        if (s[i] == c)
        return (&s[i]);

        }
        return (0);
}
