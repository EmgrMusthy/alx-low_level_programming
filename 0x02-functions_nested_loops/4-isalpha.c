#include "main.h"
/**
* _isalpha - function that check for alphabetic character
* @c: parameter to be printed
*
* Return:
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
