#include <stdio.h>

/**
 * print_numbers - a function to print then numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar("%d", i);
	}
	return (0);
}
