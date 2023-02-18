#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program starts from here
 *
 * Description: a program to print from A to Z
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	char s_letter = 'a';

	while (s_letter <= 'z')
	{
		putchar(s_letter);
		s_letter++;
	}
	putchar('\n');
	return (0);
}
