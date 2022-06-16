#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 * Return: always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
