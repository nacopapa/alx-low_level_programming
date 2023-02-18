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
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
}
