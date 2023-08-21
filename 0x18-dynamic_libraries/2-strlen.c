#include "main.h"

/**
 * _strlen - Used to determine the length of the string
 * @s: the character manipulated to obtin the desired value
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
