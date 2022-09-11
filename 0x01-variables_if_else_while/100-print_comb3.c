#include <stdio.h>

/**
 * main - code prints all possible combinations of two different digits
 *        in ascending order, separated by a comma followed by a space.
 * Return: 0.
 */
int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 < 9; digit0++)
	{
		for(digit1 = digit0 + 1; digit1 < 10; digit1++)
		{
			putchar((digit0 % 10) + '0');
			putchar((digit1 % 10) + '0');
			if  (digit0 == 8 && digit1 ==9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
