#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, q;

		for (s = 0; s < size; s++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
