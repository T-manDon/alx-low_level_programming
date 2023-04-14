#include "main.h"

/**
 * _isalpha - Checks the code for any alphabet character
 * @c: Refers to the character under scrutiny
 * Return: 1 for alphabatic character and zero for none
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
