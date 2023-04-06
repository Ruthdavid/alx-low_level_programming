#include "main.h"

int check_pal(char *s, int i, int len);
int _strien_recursion(char *s);

/**
 * is_palindrome -a function that returns 1 if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strien_recursion(s)));
}
/**
 * check_pal -checks the charcters recursively
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
