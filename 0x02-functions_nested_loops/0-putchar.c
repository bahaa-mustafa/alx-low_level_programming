#include<stdio.h>
#include"main.h"
/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; i < sizeof(word) - 1; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
