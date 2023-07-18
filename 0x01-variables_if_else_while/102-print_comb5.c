#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, a;

for (c = 0; c <= 9; c++)
{
for (a = c + 1; a <= 9; a++)
{
putchar (c + '0');
putchar (a + '0');
if (c != 8 || a != 9)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
