#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - void
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, Lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdigi = n % 10;
	if (Lastdigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigi);
	} else if (Lastdigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastdigi);
	} else if (Lastdigi < 6 && Lastdigi != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigi);
	}
	return (0);

}
