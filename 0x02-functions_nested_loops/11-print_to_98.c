#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Entyr point
* @n: starting integer
* Description: to print natural numbers
* Return 0.
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}
	printf("98\n");
}
