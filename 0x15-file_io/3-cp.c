#include "main.h"

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
	fd1 = open(file_from, O_RDWR);
	rdcount = read(fd1, text, 1024);
	if (fd1 == -1 || rdcount == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	umask(0002);
	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	printed = write(fd2, text, rdcount);
	if (printed < rdcount || fd2 == -1)
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
