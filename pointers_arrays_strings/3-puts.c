#include "main.h"
/**
* _puts - prints a string followed by a new line
* @str: pointer to the string to be printed
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
