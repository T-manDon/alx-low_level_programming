#include <stdio.h>
#include "main.h"

/**
 * _putchar - introduces the code
 * @c: one of the variables
 *
 * Return: 1 (Success)
 * On error, -1 is shown
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
