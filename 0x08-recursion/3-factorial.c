#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @k: the number provided
 * Return: 0 or 1
 */
int factorial(int k)
{
	if (k <= 0)
	{
		return (-1);
	}
	if (k == 0 || k == 1)
		return (1);
	return (k * factorial(k - 1));
}
