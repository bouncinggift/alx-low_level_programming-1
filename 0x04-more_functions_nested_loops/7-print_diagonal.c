#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = a; b > 0; b--)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
