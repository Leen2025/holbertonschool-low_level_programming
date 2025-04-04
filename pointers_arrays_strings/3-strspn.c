#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the characters to match
* Return: number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
break;
}
if (!*a)
return (count);
count++;
s++;
}
return (count);
}
