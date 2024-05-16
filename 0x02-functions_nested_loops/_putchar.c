#include <unistd.h>

/**
 * _putchar - writes the code character
 * @c: the character prited
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
