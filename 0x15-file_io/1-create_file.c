#include "main.h"

/**
 * create_file - function creating a file with read/write
 * @filename: file name
 * @text_content: string to write to file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int status;
	int i;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY
			| O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status = write(file_descriptor, text_content, i);
		if (status == -1)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
