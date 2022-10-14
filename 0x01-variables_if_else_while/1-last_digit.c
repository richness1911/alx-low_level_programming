#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, I;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	I = n % 10;
	if (I > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, I);
	}
	else if (I == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, I);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, I);
	}
	return (0);
}
