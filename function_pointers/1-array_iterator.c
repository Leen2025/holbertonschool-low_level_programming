#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: the array to iterate over
 * @size: the number of elements in the array
 * @action: pointer to the function to apply to each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
