#include <stdio.h>
/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
