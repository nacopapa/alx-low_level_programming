#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A program to print combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
        	for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				/*putchar(z + '0');*/
				if (x != 7 || y != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return 0;
}
