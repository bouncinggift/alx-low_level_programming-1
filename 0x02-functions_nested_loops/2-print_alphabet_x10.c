#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int count;
	int lc;

	for (count = 0; count <= 9; count++)

	{

		for (lc = 'a'; lc <= 'z'; lc++)

			_putchar(lc);
		_putchar('\n');
	}
}
