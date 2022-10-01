#include "main.c"

/**
 * _puts_recursion - prints a string
 * @s: pointer to char
 * Return: No return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}