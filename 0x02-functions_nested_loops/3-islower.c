#include "main.h"

/**
 * _islower - prints lowercase character
 * a function that checks for lowercase character
 * @c: parameter to be checked
 * Return: Always 1 if it is a lowercase character
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
