#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: highest 15
 * Return: n
 */
void print_times_table(int n)
{
	int num1, num2, prod;

	for (num1 = 0; num1 <= n; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= n; num2++)
		{
			prod = num1 * num2;
			_putchar(',');
			_putchar(' ');

			if (prod <= 9)
			printf('  ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
