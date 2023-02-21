#include "main.h"
/**
 * main-entry point
 *
 * Description: _putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pv[] = "_putchar";
	int i = 0;

	while (pv[i] != '\0')
	{
		_putchar(pv[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
