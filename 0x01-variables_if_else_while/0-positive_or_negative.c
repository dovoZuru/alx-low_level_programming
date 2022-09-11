#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative.
*Descrition: this enters random numbers to int n and identifies if number is positive, nagative or zero, then prints
* Returns: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);

}
