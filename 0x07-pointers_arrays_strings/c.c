#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   /* char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);*/

    char *s = "hello";
    char *f;
	char *d = "";

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
	
	f = _strchr(s, 'p');
	if (f != NULL)
	{
	printf("%s\n", f);
	}
	
	f = _strchr(d, 'l');
        if (f != NULL)
	{
	printf("%s\n", f);
	}
    
	return (0);
}