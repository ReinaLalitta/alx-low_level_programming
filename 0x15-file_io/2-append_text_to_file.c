#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - Appends text to the end of a file.
  * @filename: Name of the file to append to.
  * @text_content: The content to append to the file.
  *
  * Return: On success, returns 1. On failure, returns -1.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
