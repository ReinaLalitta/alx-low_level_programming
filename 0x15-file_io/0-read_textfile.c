#include "main.h"

/**
  * read_textfile - Reads and prints a specified number of letters from a file.
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: The number of letters read and printed, or 0 on failure.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
