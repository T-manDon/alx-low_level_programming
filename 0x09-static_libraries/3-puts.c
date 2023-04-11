#include "main.h"

/**
 * _puts - prints the string
 * @str: the code string
 * Return: string length
 */

void _puts(char *str)
{
        int a = 0;

        while (str[a] != '\0')
        {
                _putchar(str[a]);
                a++;
        }
        _putchar('\n');
}
