#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
		_putchar(x++ + '0');

	_putchar('\n');
}
