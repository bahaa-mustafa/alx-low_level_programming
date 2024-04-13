#include "main.h"

/**
 * binaryToDecimal - convert binary number to decimal number
 * @n: binary number
 * 
 * Return: decimal number
*/
int binaryToDecimal(int n)
{
    int binary_number = n, decimal_namber = 0, last_digit, temp;
    int base = 1;

    
    temp = binary_number;
    while (1)
    {
        last_digit = temp % 10;
        temp = temp / 10;
        decimal_namber += last_digit * base;
        base *= 2;
        if (temp == 0)
        {
            break;
        }
    }
    return (decimal_namber);
}

/**
 * binary_to_unit - convert binart to unit decimal
 * @b: pointer to binary string
 * 
 * Return: decimal number or 0 in fail
*/
unsigned int binary_to_uint(const char *b)
{
    int i;

    if (b == NULL)
    {
        return (0);
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return (0);
        }
    }
    return (binaryToDecimal(atoi(b)));
}
