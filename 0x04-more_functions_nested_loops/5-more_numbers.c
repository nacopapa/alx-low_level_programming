#include "main.h"
/**
 * more_numbers - a function to count 1-14
 * @x int type
 * @ int type
 * Return: Always 0
 */

void more_numbers(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
		x++;
	}
}
