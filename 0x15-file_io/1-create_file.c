#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
	close (fd);
	return (1);
}
