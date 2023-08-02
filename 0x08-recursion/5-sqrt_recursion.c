#include "main.h"

int actual_sqrt_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (x);
	return (actual_sqrt_recursion(x, y + 1));
}
