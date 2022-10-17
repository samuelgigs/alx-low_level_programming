#include <stdio.h>

/**
* main - Entry point
* Description: To print all letter except e and q
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
		putchar(ch);
		}
	ch++;
	}
	return (0);

}
