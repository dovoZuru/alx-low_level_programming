#include <stdio.h>

/**
* main - print the alphabet in lowercase.
* Description: code prints the alphabet in lowercase, followed by a new line.
* Return: 0.
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
