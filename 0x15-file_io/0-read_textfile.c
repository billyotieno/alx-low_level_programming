#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char str of files name
 * @letters: no. of letters to read
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t rcount, wcount;
	char *buff;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDWR);
	if (file_descriptor == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	rcount = read(file_descriptor, buff, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buff, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buff);

	close(file_descriptor);
	return (wcount);
}
