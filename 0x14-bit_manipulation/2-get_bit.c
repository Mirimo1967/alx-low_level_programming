#include "main.h"

/**
 * get_bit - gets the value of a bit at an index in a decimal number
 * @n: number to extract the bit from
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
