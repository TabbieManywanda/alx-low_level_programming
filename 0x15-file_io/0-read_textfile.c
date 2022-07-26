#include "main.h"
/**
 *read_textfile - reads a textfile and prints it
 *to the POSIX standard output
 *@filename: name of file
 *@letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * or 0 if file cannot be read or opened
 * or if filename is NULL, or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, r);
	if (wr == -1)
		return (0);

	close(fd);
	free(buf);
	return (wr);
}
