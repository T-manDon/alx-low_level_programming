#include "main.h"

/**
 * _print_rev_recursion - introduces the main function
 * @s: This refers to the string variable
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)

{

	if (*s)

	{

	_print_rev_recursion(s + 1);
	_putchar(*s);

	}

}
