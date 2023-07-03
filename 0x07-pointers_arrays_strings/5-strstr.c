#include "main.h"
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *b = needle;

		while (*i == *b && *b != '\0')
		{
			i++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

