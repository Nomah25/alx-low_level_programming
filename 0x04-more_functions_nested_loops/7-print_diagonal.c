#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Input variable
 * Return: void
 */

void print_diagonal(int n)
{
	int o, m;

	if (n <= 0)
		_putchar('\n');
	for (o = 0; o < n; o++)
	{
		for (m = 0; m < 1; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
