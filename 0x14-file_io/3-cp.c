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
	int fdo, fdc;
	int bytes_read = 0;
	int chars_write = 0;
	char c[1024];
	int close1, close2 = 0;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac == 3)
	{
	fdo = open(av[1], O_RDONLY);
	fdc = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fdo == -1 || fdc == -1)
	{ dprintf(STDERR_FILENO,
			"Error: Can't read from file NAME_OF_THE_FILE %s\n", av[1]);
		exit(98); }
	bytes_read = read(fdo, c, 1024);
	chars_write = write(fdc, c, bytes_read);
	if (chars_write == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't write to NAME_OF_THE_FILE %s\n", av[2]);
		exit(99); }
	else if (ac != 3)
	{ dprintf(STDERR_FILENO,
		  "Usage: cp file_from file_to\n");
		exit(97); }
	close1 = close(fdo);
	if (close1 == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't close fd FD_VALUE %d\n", fdo);
		exit(100); }
	close2 = close(fdc);
	if (close2 == -1)
	{ dprintf(STDERR_FILENO,
		  "Error: Can't close fd FD_VALUE %d\n", fdc);
		exit(100); }
	}
	return (0);
}
