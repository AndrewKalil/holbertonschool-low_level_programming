#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int num, out;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		num = read(fd, buf, letters);
		buf[num] = '\0';
		close(fd);
		if (num == 0)
		{
			free(buf);
			return (0);
		}
		else
		{
			out = write(STDOUT_FILENO, buf, num);
			if (out == 0)
			{
				free(buf);
				return (0);
			}
		}
	}
	free(buf);
	return (out);
}
