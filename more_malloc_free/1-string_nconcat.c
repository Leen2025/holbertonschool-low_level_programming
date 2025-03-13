#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated memory with concatenated string,
 *         or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1)
while (s1[len1])
len1++;
if (s2)
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
new_str = malloc(sizeof(char) * (len1 + n + 1));
if (!new_str)
return (NULL);
for (i = 0; i < len1; i++)
new_str[i] = s1[i];
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];
new_str[i + j] = '\0';
return (new_str);
}

