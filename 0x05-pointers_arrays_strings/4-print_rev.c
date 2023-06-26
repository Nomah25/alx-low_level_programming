#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String to print
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
	putchar(s[a]);
	}
	putchar('\n');
}
