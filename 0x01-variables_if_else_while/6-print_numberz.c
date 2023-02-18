#include <stdio.h>
/**
 * main - main entry to the program
 *
 * Description: A program to print all single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
