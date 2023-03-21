#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * a function that checks for alphabetic
 * @c: parameter to be checked
 * Return: always 1 if it is an alphabet
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
