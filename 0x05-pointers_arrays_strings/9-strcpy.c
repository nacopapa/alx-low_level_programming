#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 * @dest: the destination
 * @src: the source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\n')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
