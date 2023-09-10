#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, a, d, f;

for (c = 0; c <= 9; c++)
{
	for (d = 0; d <= 9; d++)
	{
		for (f = c; f <= 9; f++)
		{
			for (a = c; a <= 9; a++)
			{
				if (f == 0 && a == 0)
				{
					a++;
				}
				if (a < d)
				{
					a = d + 1;
				}
				putchar (c + '0');
				putchar (d + '0');
				putchar (' ');
				putchar (f + '0');
				putchar (a + '0');
				if (c != 8 || d != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
}
putchar ('\n');
return (0);
}
