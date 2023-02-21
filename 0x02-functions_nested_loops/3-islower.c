#include <stdio.h>
/**
 * _islower - print 0 if lowwercase
 * @c: char type
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
