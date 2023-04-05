#include "main.h"

/**
 * _strlen_recursion - introduces the main code
 * @s: Refers to the main variable
 * Return: 0 success
 */

int _strlen_recursion(char *s)

{

	int longit = 0;

	if (*s)

	{

	longit++;

	longit += _strlen_recursion(s + 1);

	}
	return (longit);
}
