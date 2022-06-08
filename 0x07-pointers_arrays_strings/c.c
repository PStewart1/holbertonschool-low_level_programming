#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

	/*char *s = "First, solve the problem. Then, write the code.";
	char *f;

	f = _strchr(s, ',');
	printf("%s\n", (f == NULL ? "nil" : f));

	f = _strchr(s, '\0');
	printf("%s\n", (f == NULL ? "nil" : f));

	f = _strchr(s, 'a');
	printf("%s\n", (f == NULL ? "nil" : f));  */

	char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
	return (0);
}
