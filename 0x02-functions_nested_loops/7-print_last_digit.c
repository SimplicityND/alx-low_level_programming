#include "main.h"

/**
 * print_last_digit -> prints the last digit
 *@n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
int x;

if (x < 0)
	x = -x;
x = n % 10;
_putchar(x + '-1');
return (x);
}
