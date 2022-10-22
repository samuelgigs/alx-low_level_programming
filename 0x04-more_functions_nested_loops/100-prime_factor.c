#include <stdio.h>
#include <math.h>

/** 
* main - Entry
* Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if ((num % 2) == 0)
		{
			printf("%d\n", c);
		}
	}
	return (0);
}


