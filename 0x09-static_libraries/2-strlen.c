#include "main.h"

/**
 * _strlen - Used to determine the length of the string
 * @s: the character manipulated to obtin the desired value
 * Return: 0
 */

int _strlen(char *s)

{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}
