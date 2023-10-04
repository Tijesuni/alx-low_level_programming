#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - returns the value of a bit at a given index
 * @n: The number
 * @index: the index
 * Return: The value of the bit at index INDEX
 *         Otherwise -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	*n &= (~(1 << index));

	return (1);
}
