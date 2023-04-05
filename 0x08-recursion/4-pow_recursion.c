#include "main.h"

/**
 * _pow_recursion - introduces the main function
 * @x: refers to the first variable
 * @y: refers to the second variable
 * Return: 0 success
 */

int _pow_recursion(int x, int y)

{

	if (y < 0)

	return (-1);

	if (y == 0)

	return (1);

	return (x * _pow_recursion(x, y - 1));

}
