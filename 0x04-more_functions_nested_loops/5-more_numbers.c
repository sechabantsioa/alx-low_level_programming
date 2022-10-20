#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int moreNum, moreN;

	for (moreN = 0; moreN <= 9; moreN++)
	{
		for (moreNum = 0; moreNum <= 14; moreNum++)
		{
			if (moreNum > 9)
			{
				_putchar((moreNum / 10) + '0');
			}
			_putchar((moreNum % 10) + '0');
		}

		_putchar('\n');
	}
}
