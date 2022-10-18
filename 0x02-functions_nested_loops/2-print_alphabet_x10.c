#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char al;

	for (ten = 0; ten <= 9; ten++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n')
	}
}
