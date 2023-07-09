#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int x = 0;

	while (*(src + v) != '\0')
	{
		v++;
	}
	for ( ; x < v ; x++)
	{
		dest[x] = src[x];
	}
	dest[v] = '\0';
	return (dest);
}

