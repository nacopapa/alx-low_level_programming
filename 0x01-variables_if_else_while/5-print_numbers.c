#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: a program to display all base 10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return(0);
}
