#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: is an input value
 * @accept: is an input value
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int d;


	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			{
				d++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

