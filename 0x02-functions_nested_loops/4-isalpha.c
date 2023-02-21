#include <stdio.h>
/**
 * _isalpha - check if it's alphabet
 * Description: check alphabests
 * @c: char type
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
