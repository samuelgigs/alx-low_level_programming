#include "main.h"

/**
* print_sign - Entry point
* @n: n is an integer
* Description: to print the signs of numbers
* Return: to return 1 -1 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
