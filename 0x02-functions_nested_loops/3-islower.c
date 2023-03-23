#include "main.h"

/**
 * _islower - Examines the code for lower case characters
 * @c: Refers to the character being assesed
 * Return: 1 for lower charaters
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
