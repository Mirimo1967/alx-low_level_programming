#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @z: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *z)
{
	int longit = 0;

	if (*z)
	{
		longit++;
		longit += _strlen_recursion(z + 1);
	}

	return (longit);
}
