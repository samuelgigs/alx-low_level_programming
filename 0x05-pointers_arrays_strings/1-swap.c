#include "main.h"

/**
* swap_int - Entry point
* @a: first input
* @b: second input
* Return: void
*/

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
