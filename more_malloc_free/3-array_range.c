#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: Pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
