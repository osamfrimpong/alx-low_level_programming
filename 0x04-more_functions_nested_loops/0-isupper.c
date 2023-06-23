#include "main.h"

/*
 * _isupper - checks if supplied character is in upper case
 * Returns: 1 if true else 0
 */

int _isupper(int c)
{
	int isUpper;
	if(c >= 65 && c <= 90)
		isUpper = 1;
	return isUpper;
}

