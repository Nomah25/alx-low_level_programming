#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: - The string to get the length from
 * Return: Length of @str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
