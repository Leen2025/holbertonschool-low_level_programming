#include "main.h"
/**
* _strcpy - Copies the string pointed to by src, including the null byte,
*           to the buffer pointed to by dest.
* @dest: The destination buffer where the string is copied
* @src: The source string to be copied
*
* Return: A pointer to the destination string (dest)
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
