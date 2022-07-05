#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int x = 0;
int y;
int z;
while (x <= 9)
{
	y = 0;
	while (y <= 9)
	{
		z = a * b;
		if (y == 0)
		{
			_putchar('0' + z);
		}
		else if (z < 10)
		{
			_putchar(' ');
			_putchar('0' + z);
		}
		else
		{
			_putchar('0' + z / 10);
			_putchar('0' + z % 10);
		}

		if (y < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		y++;
	}
	_putchar('\n');
	x++;
}

}
