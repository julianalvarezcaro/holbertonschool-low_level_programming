#include "holberton.h"

/**
  * read_textfile - reads a text from a file
  *
  * @filename: name of the file to be read
  *
  * @letters: amount of letters to be read and printed
  *
  * Return: Amount of letters it read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int cc, fd, wriRet;
	char *txt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	cc = read(fd, txt, letters);
	if (cc == -1)
		return(0);
	wriRet = write(STDOUT_FILENO, txt, cc);
	if (wriRet == -1)
		return (0);
	free(txt);
	close(fd);
	return (cc);
}
