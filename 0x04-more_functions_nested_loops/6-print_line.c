#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Number of times
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
