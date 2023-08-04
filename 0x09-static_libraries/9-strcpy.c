#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int h = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; h < t ; h++)
	{
		dest[h] = src[h];
	}
	dest[t] = '\0';
	return (dest);
}
