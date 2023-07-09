#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: is an input value
 * @accept: is an input value
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int h;


	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
		if (*s == accept[h])
		return (s);
		}
	s++;
	}
return ('\0');
}

