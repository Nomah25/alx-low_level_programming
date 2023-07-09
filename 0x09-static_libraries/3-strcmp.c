#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: an input value
 * @s2: an input value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
	g++;
	}
	return (0);
}

