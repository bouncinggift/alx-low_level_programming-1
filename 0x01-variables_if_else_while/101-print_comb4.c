#include <stdio.h>
/**
 * main - viod
 * Return: 0
 */
int main(void)
{
	int x, y, z;
	/*ASCII code for 0*/

	for (x = 48; x < 56; x++)

	{

		for (y = 49; y < 58; y++)

		{

			for (z = 50; z < 58; z++)
			{
				if (y != x && y != z && z != x && x < z && x < y && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
