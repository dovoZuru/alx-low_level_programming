#include <stdio.h>

/**
 * main - this code prints all the numbers of base 16 in lowercase.
 * Return: 0.
 */
int main(void)
{
	int n;
	char alpha;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
