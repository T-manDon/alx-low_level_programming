#include "main.h"

/**
 * _puts_recursion - introduces funtion to print a string/ prints a new line
 * @s: refers to one of the inputs
 *
 * Return: 0
 */

void _puts_recursion(char *s)

{
	if (*s)

	{

	_putchar(*s);

	_puts_recursion(s + 1);

	}

	else

	_putchar('\n');

}
