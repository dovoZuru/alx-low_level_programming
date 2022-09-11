#include <stdio.h>

/**
 * main - This code prints the alphabet in lowercase, except for q and e.
 * Return: 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');

	return (0);
}
