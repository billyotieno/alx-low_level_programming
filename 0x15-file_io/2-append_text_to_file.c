#include "main.h"

/**
 * append_text_to_file - function appends text to EOF
 * @filename: file name
 * @text_content: string to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_descriptor = open(filename, O_APPEND | O_WRONLY);
	if (file_descriptor == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(file_descriptor, text_content, i);
	if (status == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
