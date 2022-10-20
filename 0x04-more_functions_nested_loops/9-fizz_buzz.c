#include <stdio.h>

/**
 * main - filter out the 99.5% of programming job candidates
 * fizz_buzz -> printing to 100
 */

void main(void)
{
	int fn;

	for (fn = 1; fn <= 100; fn++)
	{
		if (fn == 100)
		{
			printf("Buzz");
		}
		else if (fn % 3 == 0 && fn % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (fn % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (fn % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", fn);
		}
		printf("\n");
	}
}
