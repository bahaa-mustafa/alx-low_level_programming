#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	last = abs(last);
	if (last > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last);

	else if (last <= 5 && last  != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}
