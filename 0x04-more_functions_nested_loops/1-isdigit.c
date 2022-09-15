#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @p: The number to be checked.
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int p)
{
	if (p >= '0' && p <= '9')
		return (1);

	else
		return (0);
}
