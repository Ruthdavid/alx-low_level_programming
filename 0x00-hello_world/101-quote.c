#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 *
 *Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 *  Return: Always 0 (Success)
 */
int main(Void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
