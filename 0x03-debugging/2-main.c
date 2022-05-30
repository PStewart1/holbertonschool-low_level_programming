#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest, largestb, largestc;
	
	int i, j, k;
	int x, y, z;
        
	a = 972;
        b = -98;
        c = 0;

	x = 1;
	y = 1;
	z = 1;
	i = 5;
	j = 5;
	k = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

	a = 1;
	b = 2;
	c = 3;
	
	largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

	largestb = largest_number(i, j, k);

        printf("%d is the largest number\n", largestb);	

	largestc = largest_number(x, y, z);

        printf("%d is the largest number\n", largestc);

        return (0);
}
