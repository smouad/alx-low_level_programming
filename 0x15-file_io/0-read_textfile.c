#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char *buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t bytesRead = read(fd, buf, letters);
	if (bytesRead == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);

	ssize_t bytesWritten = write(STDOUT_FILENO, buf, bytesRead);
	free(buf);

	if (bytesWritten == -1)
		return (0);

	return (bytesWritten);
}
