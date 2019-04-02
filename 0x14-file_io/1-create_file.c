#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *create_file - create
 *@filename: name
 *@text_content: content.
 *Return: number.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x = 0;
	int chars_write = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (x = 0 ; *(text_content + x) != '\0' ; x++)
		{
		}
		chars_write = write(fd, text_content, x);
		if (chars_write == -1)
		{
			return (-1);
		}
	}
	else if (text_content == NULL)
	{
	}
	close(fd);
	return (1);
}
