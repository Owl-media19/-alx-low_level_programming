#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d  and is 0\n", n, 1);
	}
	else
	{
		printf("Last digit of %d is %d and is less tha 6 not 0\n", n, 1);
	}
	return (0);
}
