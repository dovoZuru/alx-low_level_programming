
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char alpha;

	while (c++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
