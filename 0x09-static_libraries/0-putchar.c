#include <unistd.h>

/**
 * _putchar - introduces the code
 * @c: The  variable
 * Return: 0
 * On error, -1 for error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
