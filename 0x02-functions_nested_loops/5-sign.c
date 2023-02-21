#include "main.h"
/**
 * print_sign - Print sign of  number
 * @n: type int
 * Description: print +, 0, -
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
