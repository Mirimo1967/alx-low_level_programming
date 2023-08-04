#include "main.h"

/**
 * _puts - program prints a string to stdout.
 * @str: string to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
