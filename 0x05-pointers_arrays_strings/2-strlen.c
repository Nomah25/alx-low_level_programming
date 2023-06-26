#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: - The string to get the length from
 * Return: Length of @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
