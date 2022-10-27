#include "main.h"

/**
 * cap_string - capitalization function
 * @a: string param
 * Return: capitalized version of the string
 */
char *cap_string(char *a)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int x = 0, i;

	while (a[x])
	{
		i = 0;
		while (i < len)
		{
			if ((x == 0 || a[x - 1] == spc[i] && (a[x] >= 97 && a[x] <= 122))
					a[x] = a[x] - 32;
					i++;
					}
					a++;
					}
					return (x);
					}
