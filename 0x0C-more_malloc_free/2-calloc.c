#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @x: memory area to be filled
 * @y: char to copy
 * @z: number of times to copy y
 *
 * Return: pointer to the memory area x
 */
char *_memset(char *x, char y, unsigned int z)
{
	unsigned int t;

	for (t = 0; t < z; t++)
	{
		x[t] = y;
	}

	return (x);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
