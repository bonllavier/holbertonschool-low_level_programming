#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *read_textfile - read
 *@filename: name
 *@letters: charac.
 *Return: number.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_read;
	int chars_write = 0;
	char *c = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bytes_read = read(fd, c, letters);
	if (bytes_read == -1)
	{
		return (0);
	}
	c[bytes_read] = '\0';
	chars_write = write(STDOUT_FILENO, c, bytes_read);
	if (chars_write == -1 || chars_write != bytes_read)
	{
		return (0);
	}
	close(fd);
	return (bytes_read);
}
