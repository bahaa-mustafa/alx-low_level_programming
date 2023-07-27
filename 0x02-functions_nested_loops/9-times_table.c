#include "main.h"
/**
 * times_table - print 9 times table, starting with 0
 */
void times_table(void)
{
	int start_number, times_number;

	for (times_number = 0; times_number < 10; times_number++)
	{
		int base_value = 0;

		for (start_number = 0; start_number < 10; start_number++)
		{
			int start_value = 0 + base_value;
			_putchar(start_value + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		base_value++;
	}
