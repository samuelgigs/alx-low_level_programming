#include <stdio.h>

/**
* main - Entry point
* Description: to print combination of integers
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar((i % 10) + '0');

	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
