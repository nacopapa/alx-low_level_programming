#include <unistd.h?

/**
 * _putchar - prints character c to stdout
 * @c:  char to be printed
 * Return: 0 on Sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
