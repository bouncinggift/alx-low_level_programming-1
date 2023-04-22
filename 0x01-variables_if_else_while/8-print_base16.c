#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 16; x++)
	
	{
	       	if (x < 10)
		{
			putchar(x);
		} else
		{
			putchar("a" + x - 10);
		}
		putchar('\n');
		return (0);
	}
}
