#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 from 0 with putchar.
 * Return: 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');

	return (0);
}
