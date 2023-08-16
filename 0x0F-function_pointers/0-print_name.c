#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @func: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*func)(char *))
{
	if (name == NULL || func == NULL)
		return;

	func(name);
}
