#include "main.h"

/**
 * _memcpy - copies the first n bytes from src to dest
 * @dest: pointer to memory area to be filled
 * @src: bytes to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
