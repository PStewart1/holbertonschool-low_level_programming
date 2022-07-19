#include "main.h"

/**
 * opener - a function that calls open() to open or create a file
 * @filename: name of file to open
 * @choice: selects whether to open existing file or create new file
 * Return: file descriptor
 */

int opener(char *filename, int choice)
{
	int fd;

	if (choice == 1)
	{
		fd = open(filename, O_RDWR);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
	}
	if (choice == 2)
	{
		umask(0002);
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}
	return (fd);
}

/**
 * main - a program that copies the content of a file to another file.
 * @ac: number of arguments passed
 * @av: array of arguments
 * Return: 0 on success, exits with various error codes on failure
 */

int main(int ac, char **av)
{
	int fd1, fd2, closed;
	ssize_t printed, rdcount;
	char *text[1025], *file_from = av[1], *file_to = av[2];

	if (ac != 3)
	{
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(97);
	}
	text[1024] = '\0';
	fd1 = opener(file_from, 1);
	rdcount = read(fd1, text, 1024);
	if (rdcount == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = opener(file_to, 2);
	printed = write(fd2, text, rdcount);
	if (printed < rdcount)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	closed = close(fd1);
	if (closed == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	closed = close(fd2);
	if (closed == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
