#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: int integer type
 * Return 0 Always
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		printf("%d", x);
		printf(", ");
	}
	printf("\n");
}
