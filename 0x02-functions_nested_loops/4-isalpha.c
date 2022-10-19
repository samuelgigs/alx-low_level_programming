#include "main.h"

/**
* _isalpha - checks: for alphabetic character
* @c: c is an ascii character
* Description: to check whether is lower or upper
* Return: 1 if true or 0 if false
*/

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else if ((c >= 'A')  && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
