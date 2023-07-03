#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int s;

	for (r = 0; r < 8; r++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[r][s]);
		_putchar('\n');
	}
}

