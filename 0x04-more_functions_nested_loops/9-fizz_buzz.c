#include<stdio.h>
/**
 * main - print some numbers from 0 : 100,
 * and some words like Fizz Buzz ....
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			puts("FizzBuzz");
		else if (i % 3 == 0)
			puts("Fizz");
		else if (i % 5 == 0)
			puts("Buzz");
		else
			puts("%i", i);
		if (i < 100)
			puts(" ");
	}
	puts("\n");
	return ();
}
