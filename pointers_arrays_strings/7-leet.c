#include "main.h"
/**
* leet - Encodes a string into 1337.
* @s: The input string.
* Return: The modified string.
*/
char *leet(char *s)
{
char *ptr = s;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i;
while (*ptr)
{
for (i = 0; letters[i]; i++)
{
if (*ptr == letters[i])
{
*ptr = numbers[i];
}
}
ptr++;
}
return (s);
}
