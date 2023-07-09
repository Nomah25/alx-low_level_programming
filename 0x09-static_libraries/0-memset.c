#include <stdio.h>
#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}

