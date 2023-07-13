#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int a;

	if (min > max)
		return (NULL);

	ar = (malloc(sizeof(*ar) * ((max - min) + 1)));

	if (ar == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		ar[a] = min;

	return (ar);
}
