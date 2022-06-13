#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> assign a random number to the variable n
 * each time it is executed
 * and print the last digit of the numver stored in the variable n
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit 0f %d is %d", n, n % 10);

	if (n % 10 > 5)
		printf("and is greater than 5 \n");
	else if (n % 10 == 0)
		printf("and is 0 \n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0 \n");
	return (0);
}
