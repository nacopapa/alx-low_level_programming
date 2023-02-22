#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long int y, z, n, mysum;

	y = 1;
	z = 2;
	mysum = 0;

	for (x = 1; x <= 33; x++)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			mysum = mysum + y;
		}
		n = y + z;
		y = z;
		z = n;
	}

	printf("%lu\n", mysum);

	return (0);
}
