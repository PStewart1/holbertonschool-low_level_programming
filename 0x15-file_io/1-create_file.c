#include "main.h"
#include <string.h>

/**
 * create_file - creates a new file and writes a given string to it
 * @filename: name of file to be read
 * @text: string to be written to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text)
{
	int file;
	ssize_t printed;

	if (filename == NULL)
		return (-1);
	file = creat(filename, 0600);
	if (file == -1)
		return (-1);
	if (text == NULL)
		text = "";

	printed = write(file, text, strlen(text));
	if (printed == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
