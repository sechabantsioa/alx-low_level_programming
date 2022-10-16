#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int sgn;

	for (sgn = 48; sgn < 58; sgn++)
	{
		putchar(sgn);
		if (sgn != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
