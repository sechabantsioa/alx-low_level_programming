#include "main.h"

/**
 * print_line - draws a straight line
 * @n: is the number of times the character '_' should be printed
 */
void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
