#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file to be appended on
 * @text_content: content to be appended to filename
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	else if (text_content != 0)
	{
		for (i = 0; text_content[i]; i++)
			;
		num = write(fd, text_content, i);
		if (num != i)
			return (-1);
	}
	close(fd);
	return (1);
}
