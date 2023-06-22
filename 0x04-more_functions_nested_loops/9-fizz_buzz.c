#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100 w/
 * For multiples of 3 print Fizz, for the multiples of 5 print Buzz
 *   multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
		if (s % 15 == 0)
			printf("FizzBuzz");
		else if (s % 3 == 0)
			printf("Fizz");
		else if (s % 5 == 0)
			printf("Buzz");
		else
			printf("%d", s);
		if (s < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
