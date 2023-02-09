#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: text file being read
 * @letters: number of letter to be read
 * Return: w-actual number of bytes read and printed
 * 0 when function fails or filenem is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
