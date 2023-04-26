#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;
	/*ASCII code for 0*/

	for (w = 48; w < 58; w++)

	{

		for (x = 48; x < 57; x++)

		{

			for (y = 48; y < 58; y++)

			{

				for (z = 48; z < 58; z++)

				{
					if (w <= y && !(y == 48 && z == 48) && !(w == y && x == z) && (z >= x || (z < x && w == 48 && z == 48)))
					{
						putchar(w);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						if (x < 58 && !(w == 57 && x == 56))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
