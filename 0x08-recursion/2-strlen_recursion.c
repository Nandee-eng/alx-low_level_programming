#include <stdio.h>

/**
 * _strlen_recursion -  return length of a string
 * @s: pointer to string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
