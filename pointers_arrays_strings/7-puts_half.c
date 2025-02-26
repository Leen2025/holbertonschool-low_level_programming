#include "main.h"
/**
* puts_half - Prints the second half of a string
* @str: The string to process
*/
void puts_half(char *str)
{
int len = 0;
int start;
while (str[len] != '\0')
{
len++;
}
start = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
for (; str[start] != '\0'; start++)
{
_putchar(str[start]);
}
_putchar('\n');
}
