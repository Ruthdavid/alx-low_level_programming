#include "main.h"

/**
 * print_most_numbers -a function that prints numbers 0 to 9
 */

void print_most_numbers(void)
{
	int X;

	for (X = 0; X < 10; X++)
	{
		if (X != 2 && X != 4)
			_putchar(X + '0');
	}
	_putchar('\n');
}
