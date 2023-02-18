#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: A program to print alphabests in lower
 * and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s_letter = 'a';

/* Print in lowercases*/
	while (s_letter <= 'z')
	{
		if (s_letter != 'e' && s_letter != 'q')
		{
			putchar(s_letter);
		}
		s_letter++;
	}
	putchar('\n');
	return (0);
}
