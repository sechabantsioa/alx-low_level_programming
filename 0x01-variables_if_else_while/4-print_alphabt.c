#include <stdio.h>

/**
 * main- prints alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char l;

	for(l = 'a' <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		
		putchar('\n');

		return (0);
	}
}
