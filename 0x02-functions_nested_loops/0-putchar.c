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
	int num = sizeof(word) - 1;

	for (int i = 0; i < num; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
