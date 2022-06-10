
/**
 * _atoi - takes a strinf and returns its value in int
 * @str: string to convert
 *
 * Return: int value of str
 */

int _atoi(char *str)
{
	int res = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	res = res * 10 + str[i] - '0';

	return (res);
}
