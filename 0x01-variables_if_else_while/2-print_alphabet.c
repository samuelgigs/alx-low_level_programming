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
	}
	putchar('\n');
	return (0);
}

