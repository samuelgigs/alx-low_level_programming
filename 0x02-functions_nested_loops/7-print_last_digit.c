#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (n < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
