#include "holberton.h"

/**
  * append_text_to_file - appends a text to the end of a file
  *
  * @filename: name of the file to append the text to
  * @text_content: text to be appended
  *
  * Return: 1 on sucess. -1 on failure
  *
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, controlW;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
	{
	}
	controlW = write(fd, text_content, len);
	if (controlW == -1)
		return (-1);
	close(fd);
	return (1);
}
