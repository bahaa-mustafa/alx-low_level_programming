#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print name of programe
 * @argc: number of things in the programe
 * @argv: it is an argument vector in the programe
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
