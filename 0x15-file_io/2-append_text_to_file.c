#include "main.h"

/**
 * append_text_to_file - appends text to the enf of a file
 * @filename: name of file
 * @text: text to be appended to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text)
{
	int file;
	ssize_t printed;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text == NULL)
	{
		close(file);
		return (1);
	}
	printed = write(file, text, strlen(text));
	if (printed == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
