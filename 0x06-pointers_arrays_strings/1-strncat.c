#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, c;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, x++)
	{
		dest[x] = src[c];
	}
	return (dest);
}
