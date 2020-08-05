#include "holberton.h"

/**
 * create_file - creates a file with a content
 *
 * @filename: name of the file
 * @text_content: content that the new file must have
 *
 * Return: 1 on sucess. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, controlW;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
	{
	}
	controlW = write(fd, text_content, len);
	if (controlW == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
