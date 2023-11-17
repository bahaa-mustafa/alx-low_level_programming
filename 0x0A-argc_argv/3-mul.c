#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print number of things in programe
 * @argc: argement count in programe
 * @argv: argement vector in a programe
 *
 * Return: always 0 in success and 1 in not
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error");
	return (1);
}
