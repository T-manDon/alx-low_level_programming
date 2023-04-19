#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - introduces the code
 * @name: the string variable
 * @f: the pointer variable
 * Return: 0 Success
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
