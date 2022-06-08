#include <stdio.h>
/**
 * main - Entry point
 * Return:1
 */

int main (void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char* pStr = str;

	fputs(pStr, stdout);
	fputs("\n", stdout);
	return (1);
}
