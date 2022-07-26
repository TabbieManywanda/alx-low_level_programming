#include "main.h"
/**
 *append_text_to_file - appends text at end of file
 *@filename: name of file
 *@text_content: string to add at end of file
 *
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_RDONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
