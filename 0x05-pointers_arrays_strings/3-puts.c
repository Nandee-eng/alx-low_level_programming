#include "main.h"
/**
 * _puts - use pointer to change value in the memory
 * @str: pointer to string location
 * Return: null/void
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
