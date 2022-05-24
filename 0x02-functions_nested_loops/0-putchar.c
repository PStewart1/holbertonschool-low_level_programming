#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints each letter from a to z
 *
 * Return: 0, always succesful
*/

int main(void)
{
	char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
        	putchar(ch);
        }
        putchar('\n');
        return (0);
}

