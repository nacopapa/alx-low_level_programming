#include <stdio.h>
/**
 * main - main entry to the program
 *
 * Description: A program that prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
