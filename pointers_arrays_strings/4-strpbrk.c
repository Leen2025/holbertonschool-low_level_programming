#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to search
* @accept: the characters to match
* Return: pointer to the first matching byte in s, or NULL if no match
*/
char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
return (s);
}
s++;
}
return (NULL);
}
