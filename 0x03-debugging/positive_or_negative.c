#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - The entry part of the program
 *
 * Description: A program to return negative and positive numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n=98;

/**	srand(time(0));
 *	n = rand() - RAND_MAX / 2;
 */
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
