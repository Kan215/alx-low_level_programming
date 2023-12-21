#include "main.h"

/**
 * _isupper - check ifa letter is upper
 * 0x : The number to be checked
 * REturn : 1 for upper case letter or 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
