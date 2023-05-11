#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this function inroduces the code
 * @filename: this is the file name variable
 * @letters: this is the letters variable
 * Return: 0 for success or 1 for null
 *        0 when function runs succesfully or function fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)

	return (0);

	buf = malloc(sizeof(char) * letters);

	t = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
