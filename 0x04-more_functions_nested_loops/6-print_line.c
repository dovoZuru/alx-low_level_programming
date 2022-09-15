#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @y: The number of _ characters to be printed.
 */
void print_line(int y)
{
	int len;

	if (y > 0)
	{
		for (len = 0; len < y; len++)
			_putchar('_');
	}

	_putchar('\n');
}
