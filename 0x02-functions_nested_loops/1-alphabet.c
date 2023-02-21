#include <stdio.h>
/**
 * main-entry point
 *
 * Description: print alphabests
 *
 * Return 0
 */
void print_alphabet()
{
	char x='a';
	
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
