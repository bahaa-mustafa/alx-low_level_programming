#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, a, s;

for (c = 0; c <= 9; c++)
{
for (a = c + 1; a <= 9; a++)
{
for (s = a + 1; s <= 9; s++)
{
putchar (c + '0');
putchar (a + '0');
putchar (s + '0');
if (c != 7 || a != 8 || s != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
