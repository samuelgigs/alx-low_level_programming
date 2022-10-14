#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of int: %lu bytes\n", sizeof(a));
	printf("size of char: %lu bytes\n", sizeof(b));
	printf("size of long int: %lu bytes\n", sizeof(c));
	printf("size of long long int: %lu bytes\n", sizeof(d));
	printf("size of float: %lu bytes\n", sizeof(e));
	return (0);
}
