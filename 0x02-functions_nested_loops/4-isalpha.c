#include "main.h"

/**
 * _isalpha - Checks the code for any alphabet character
 * c - refers to the character under scrutiny
 * Return: 1 for alphabatic character and zero for none
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
