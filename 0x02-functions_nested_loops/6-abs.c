#include "main.h"

/**
 *_abs -> returns absolut value of a number
 *@n: parameter
 *Return: absolute value of a number
 *
 **/

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
