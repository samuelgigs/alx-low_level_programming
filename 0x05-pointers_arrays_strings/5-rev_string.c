#include "main.h"

/**
* rev_string - Entry point
* @s: first input
* Return: void
*/

void rev_string(char *s)
{
	char revs = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		revs = s[i];
		s[i] = s[c];
		s[c] = revs;
	}
}
