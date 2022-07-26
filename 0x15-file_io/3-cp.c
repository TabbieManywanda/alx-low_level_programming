#include <stdio.h>
#include "main.h"
/**
 *_error - checks if file can be opened
 *@file_from: file from
 *@file_to: file to
 *@argv: arguments vector
 *
 * Return: void
 */
void _error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, errclose;
	ssize_t wr, ch;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error(file_from, file_to, argv);

	ch = 1024;
	while (ch == 1024)
	{
		ch = read(file_from, buf, 1024);
		if (ch == -1)
			_error(-1, 0, argv);
		wr = write(file_to, buf, ch);
		if (wr == -1)
			_error(0, -1, argv);
	}

	errclose = close(file_from);
	if (errclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	errclose = close(file_to);
	if (errclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
