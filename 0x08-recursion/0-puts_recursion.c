#include "stdio.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: pointer to char
 * return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
