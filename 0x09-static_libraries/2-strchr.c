#include "main.h"
#include <stddef.h>

/**
 * _strchr - Program Entry point
 * @s: input value
 * @c: input  value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return (0);
}
