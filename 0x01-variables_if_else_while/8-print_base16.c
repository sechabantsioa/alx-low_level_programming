#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lcl;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lcl = 'a'; lcl <= 'f'; lcl++)
	{
		putchar(lcl);
	}

	putchar('\n');

	return (0);
}
