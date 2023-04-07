#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;

	while (x != 0)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
