#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 * Description: Can only use _putchar twice.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
