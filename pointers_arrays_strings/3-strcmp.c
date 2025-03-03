#include "main.h"
/**
* _strcmp - compares two strings.
* @s1: first string.
* @s2: second string.
*
* Return: the difference between the first non-matching character or 0
* if the strings are equal.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
