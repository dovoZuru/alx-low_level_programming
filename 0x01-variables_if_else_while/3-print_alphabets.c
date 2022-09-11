#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Return: 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		puchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		puchar(alpha);

	puchar('\n');

	return (0);
}
