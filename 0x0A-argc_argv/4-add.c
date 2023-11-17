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
	int i, add = 0, n;
	char *refrence;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], &refrence, 10);
			if (*refrence)
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
	}
	else
		printf("%d\n", add);
	return (0);
}
