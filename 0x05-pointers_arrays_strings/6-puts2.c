#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: Input
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	i = length - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
