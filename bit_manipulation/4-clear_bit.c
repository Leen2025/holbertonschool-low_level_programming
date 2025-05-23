#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: index to set.
 * @n: unsigned long integer.
 *
 * Return: 1 if it worked or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
