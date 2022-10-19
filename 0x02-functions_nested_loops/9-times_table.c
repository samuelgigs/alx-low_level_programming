#include "main.h"

/**
* times_table - Entry
* Description: to print multible of 9
* Return: 0.
*/

void times_table(void)
{
	int row, column, multiple, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
		multiple = row * column;
		tens = multiple / 10;
		ones = multiple % 10;
		if (column == 0)
		{
		_putchar('0');
		}
		else if (multiple < 10)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(ones + '0');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(tens + '0');
		_putchar(ones + '0');
		}
		}
	_putchar('\n');
	}
}

