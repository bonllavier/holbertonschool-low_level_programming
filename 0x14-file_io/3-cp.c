#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *main - main
 *@ac: counter
 *@av: argu vector.
 *Return: number.
 */
int main(int ac, char **av)
{
	int fdo, fdc, bytes_read, chars_write = 0;
	char c[1024];
	int close1, close2 = 0;

	if (ac == 3)
	{ fdo = open(av[1], O_RDONLY);
	if (fdo == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	fdc = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdc == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't read from file %s\n", av[2]);
		exit(98); }
	bytes_read = read(fdo, c, 1024);
	if (bytes_read == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	chars_write = write(fdc, c, bytes_read);
	if (chars_write == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't write to %s\n", av[2]);
		exit(99); }
	else if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	close1 = close(fdo);
	if (close1 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo);
		exit(100); }
	close2 = close(fdc);
	if (close2 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdc);
		exit(100); }
	}
	return (0);
}
