#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @k: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int k)
{
	if (k >= 'A' && k <= 'Z')
		return (1);

	else
		return (0);
}
