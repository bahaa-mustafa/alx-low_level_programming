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
	printf("Last digit of %d is", n);
	n = n % 10;
	/*n = abs(n);*/
	if (n > 5)
	printf(" %d and is greater than 5\n", n);

	else if (n <= 5 && n != 0)
	printf(" %d and is less than 6 and not 0\n", n);

	else
		printf(" %d and is 0\n", n);

	return (0);
}
