 #include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4
  5 /**
  6  * main - prints each letter from a to z
  7  *
  8  * Return: 0, always succesful
  9  */
 10
 11 int main(void)
 12 {
 13         char ch;
 14
 15         for (ch = 'a'; ch <= 'z'; ch++)
 16         {
 17                 putchar(ch);
 18         }
 19         putchar('\n');
 20         return (0);
 21 }

