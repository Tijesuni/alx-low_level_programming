#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The number
 * @index: the index
 * Return: The value of the bit at index INDEX
 *         Otherwise -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
