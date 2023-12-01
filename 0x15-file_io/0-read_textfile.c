#include "main.h"

/**
 * read_textfile - Reads a text file and prints its content
 * to the standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 * 
 * Return: The number of letters printed, or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}

	buf[i] = '\0';
	close(fd);

	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (y);
}
