#include "main.h"

/**
* print_diagonal - Entry point
* @n: first integer
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
			_putchar('\\');
			}
			else
			{
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
