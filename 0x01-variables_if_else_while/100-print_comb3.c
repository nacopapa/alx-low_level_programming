#include <stdio.h>
/**
 * main -  main entry poin to the program
 *
 * Description: A program to count double digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 1;

	while (x < 90)
	{
		putchar ((x / 10) + '0');
		putchar ((x % 10) + '0');
		if (x < 90)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	return (0);
}
