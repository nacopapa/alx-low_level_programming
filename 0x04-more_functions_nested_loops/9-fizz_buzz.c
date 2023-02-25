#include <stdio.h>

/**
 * main - main entry to the program
 * Description: Multiples of 3, print Fizz. but for 5, print Buzz.
 * Multiples of 3 and 5, print FizzBuzz.
 * Return: Always 0
 */

int main(void)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);

		if (x != 100)
			printf(" ");
		x++;
	}
	printf("\n");

	return (0);
}
