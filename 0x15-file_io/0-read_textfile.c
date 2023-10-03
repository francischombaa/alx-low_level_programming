#include "main.h"
#include <stdlib.h>

/**
 * reading_textfile- Read text of  file inorder to  print STDOUT.
 * @filename: texts the files that is being read
 * @letters: ths are letter numbers to read
 * Return: w- actual printed number of bytes 
 *        0 when filename is NULL.
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

