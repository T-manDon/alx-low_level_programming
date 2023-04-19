#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - determines the sum of the two variables
 * @a: The first entry
 * @b: The second entry
 * Return: sum value of a and b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - subtracts the values
 * @a: The first value
 * @b: The second vlue
 * Return: The difference
 */

int op_sub(int a, int b)

{
	return (a - b);
}


/**
 * op_mul - gives the computed value
 * @a: The first value
 * @b: The second value
 * Return: The outcome
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div -devides the values
 * @a: The first value
 * @b: The second value
 * Return: The output
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - Gives the remainder
 * @a: The first value
 * @b: The second alue
 * Return: gives remander after division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
