#include "main.h"

/**
 * print_diagonal -a function that draws a diagnal line
 * @n: integer parameter
 */

void print_diagonal(int n)
{
	int x;
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}