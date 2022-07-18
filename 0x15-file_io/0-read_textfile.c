#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stadard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t printed, rdcount;
	char *text = malloc(sizeof(char) * letters + 1);

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (text == NULL || file == -1)
	{
		free(text);
		return (0);
	}
	text[letters + 1] = '\0';
	rdcount = read(file, text, letters);
	if (rdcount == -1)
	{
		close(file);
		free(text);
		return (0);
	}
	printed = write(STDOUT_FILENO, text, rdcount);
	if (printed < rdcount)
	{
		close(file);
		free(text);
		return (0);
	}
	close(file);
	free(text);
	return (printed);
}
