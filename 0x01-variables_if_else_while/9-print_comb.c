#include <stdio.h>

/**
 * main - print ala possible combinations of single-digit numbers.
 *
 * return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(num == 9);
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
