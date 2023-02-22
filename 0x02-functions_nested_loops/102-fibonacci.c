#include <stdio.h>
/**
 * main - main entry point
 * Description: print first 50 fibonacci numbers starting with 1 and 2
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int counter = 2;
	long int x = 1, y = 2;
	long int z;

	printf("%lu, ", x);
	while (counter <= 50)
	{
		if (counter == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		counter++;
	}

	return (0);
}
