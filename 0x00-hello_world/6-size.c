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
	printf("The size of a char: %lu byte(s)\n", sizeof(c));
	printf("The size of an int: %lu byte(s)\n", sizeof(i));
	printf("The size of a long int: %lu byte(s)\n", sizeof(l));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(L));
	printf("The size of a float: %lu byte(s)\n", sizeof(f));
	return(0);
}
