#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - bears the main code
 * @c: Theprimary character used
 *
 * Return: On success 1.
 * On error, -1 value returns
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
