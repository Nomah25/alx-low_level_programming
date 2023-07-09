#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}

	return (0);
}

