#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->owner = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	  printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
