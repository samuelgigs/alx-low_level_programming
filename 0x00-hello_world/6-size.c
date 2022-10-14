#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %lu bytes(s)\n", sizeof(a));
	printf("size of init: %lu bytes(s)\n", sizeof(b));
	printf("size of long int: %lu bytes(s)\n", sizeof(c));
	printf("size of long long int: %lu bytes(s)\n", sizeof(d));
	printf("size of float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
