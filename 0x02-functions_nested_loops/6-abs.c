#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the value of an integer
 * @c: The number to be computed
 * Return: Absolute value of number or 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
