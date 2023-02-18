#include <stdio.h>
/**
 * main - main entry to the program
 *
 * Description: A program that prints
 * all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int num;

	for (x =0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
