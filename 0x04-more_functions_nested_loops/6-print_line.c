#include "main.h"

/**
 * print_line -a function that draws a straight line
 * @n: integer parameter
 */

void print_line(int n)
{
	int x;

	for (n <= '0';)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar(95);
	_putchar('\n');
}
