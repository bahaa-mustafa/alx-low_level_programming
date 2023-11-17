#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, add = 0;
	char *flags;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flags, 10);
		if (*flags)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += n;
		}
	}
	printf("%d\n", add);

	return (0);
}
