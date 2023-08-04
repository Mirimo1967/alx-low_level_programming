#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int t;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
	dest[z] = src[t];
	z++;
	t++;
	}
	dest[z] = '\0';
	return (dest);
}
