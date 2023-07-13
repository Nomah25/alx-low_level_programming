#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int g;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (g = 0; g < (nmemb * size); g++)
		p[g] = 0;
	return (p);
}
