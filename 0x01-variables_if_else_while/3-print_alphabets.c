#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
* Description: to print alphabet in lower case
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
		{
		char ct;

		for (ct = 'A'; ct <= 'Z'; ct++)
		{
		putchar(ct);
		}
		}
	}
	putchar('\n');
	return (0);
}

