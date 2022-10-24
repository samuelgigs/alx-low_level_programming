#include "main.h"

/**
* _strlen - returns lenght of string
*@s: first integer
*Return: len
*/

int _strlen(char *s)
{
	int len = 0;

	while
	(*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

