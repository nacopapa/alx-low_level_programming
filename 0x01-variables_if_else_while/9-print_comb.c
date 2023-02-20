#include <stdio.h>
/**
 * main - entry to the program
 *
 * Description: print all combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
		if (x < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
