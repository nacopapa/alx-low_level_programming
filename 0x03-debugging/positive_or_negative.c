#include <stdio.h>

/**
 * main - main entry 
 * @i: int integer type
 * Return Always 0 (Success)
 */

void positive_or_negative(void)
{
	int i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);

	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else 
	{
		printf("%d is negative", i);
	}

}
