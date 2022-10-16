#include  <stdio.h>

/**
* main - prints alphabet in lowercase, and then in uppercase
*
* return: Always 0.
*/

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
