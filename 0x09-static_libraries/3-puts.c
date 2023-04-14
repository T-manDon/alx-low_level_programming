#include "main.h"

/**
 * _puts - prints the string
 * @str: the code string
 * Return: string length
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
