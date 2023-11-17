#include <stdio.h>
#include "main.h"

/**
 * main - print number of things in programe
 * @argc: argement count in programe
 * @argv: argement vector in a programe
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
