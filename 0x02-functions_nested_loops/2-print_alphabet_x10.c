#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabests 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int y = 0;

	while (y < 10)
	{
		char x = 'a';
		while (x < 'z')
		{
			putchar(x);
			x++;
		}
		y++;
		putchar('\n');
	}
}
