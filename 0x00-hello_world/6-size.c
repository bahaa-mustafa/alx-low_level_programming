#include<stdio.h>
/**
 * main - Entry main
 *
 * Description: 'the main will print size of some various types'
 * @char: this parameter has a single character
 * @int: this parameter has a number value
 * @long int: this parameter has a more size than int
 * @long long int: this parameter has size more than int and long int
 * @float: this parameter has a biger number than int
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
