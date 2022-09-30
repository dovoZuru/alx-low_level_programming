#include "main.c"

/**
 * _print_rev_recursion - puts a recursion string in reverse
 * @s: the pointer to string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
