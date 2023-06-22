#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: Input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int o, m;

	if (n <= 0)
	{
	for (o = 0; o < n; o++)
	{
		for (m = 0; m < 1; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (o == (n - 1));

		{
			continue;
		}
		_putchar('\n');
	}
	}
	_putchar('\n');
}
