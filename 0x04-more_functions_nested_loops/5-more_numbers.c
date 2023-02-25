#include "main.h"

void more_numbers(void)
{
	int x = 0;
	int y;

	while (x < 11)
	{
		for (y = 0; y < 15; y++)
		{
			if(y >= 10)

				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
		x++;
	}
}

