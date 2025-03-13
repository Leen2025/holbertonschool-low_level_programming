#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc and sets it to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *char_ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
char_ptr = (char *)ptr;
for (i = 0; i < (nmemb * size); i++)
char_ptr[i] = 0;
return (ptr);
}
