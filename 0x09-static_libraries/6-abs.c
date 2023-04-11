#include "main.h"

/**
 * _abs - Calculates the value of the integer
 * @c: Refers to the value under scrutiny
 * Return: Absolute value of number or zero
 */

int _abs(int c)

{
        if (c < 0)
        {
        int _abs;

        _abs = c * -1;
        return (_abs);
        }
        return (c);
}
