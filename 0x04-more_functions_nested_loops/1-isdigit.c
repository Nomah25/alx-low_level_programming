#include "main.h"

/**
 * _isdigit - Check for a digit character
 * @c: Character to be checked
 * Return: 1 if character is a digit or 0 for anyting else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
