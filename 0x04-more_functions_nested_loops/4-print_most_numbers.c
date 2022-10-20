#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers + '0');
		}
		numbers++;
	}
	_putchar('\n');
}
