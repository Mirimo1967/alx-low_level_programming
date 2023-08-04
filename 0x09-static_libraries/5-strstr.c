#include "main.h"
/**
 * _strstr - program entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *l = needle;

		while (*k == *l && *l != '\0')
		{
			k++;
			l++;
		}

		if (*l == '\0')
			return (haystack);
	}

	return (0);
}
