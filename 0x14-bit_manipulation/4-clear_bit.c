#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at a given index
 * @n: pointer to the number in which to clear the bit
 * @index: The index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
