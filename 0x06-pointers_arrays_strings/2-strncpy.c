#include "main.h"
#include <string.h>

/**
* _strncpy - Entry pont
* @dest: first parameter
* @src: second parameter
* @n: third parameter
* Return: return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
