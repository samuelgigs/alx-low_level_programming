#include "main.h"
#include <string.h>

/**
* _strncat - Entry point
* @dest: first integer
* @src: second integer
* @n: third integer
* Return: return a pointer dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}
