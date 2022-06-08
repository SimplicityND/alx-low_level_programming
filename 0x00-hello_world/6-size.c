#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;

	printf("The size of a char: %lu.\n", sizeof(c));
	printf("The size of an int: %lu.\n", sizeof(i));
	printf("The size of a long int: %lu.\n", sizeof(l));
	printf("The size of a long long int: %lu.\n", sizeof(L));
	printf("The size of a float: %lu.\n", sizeof(f));
	
	return(0);
}
