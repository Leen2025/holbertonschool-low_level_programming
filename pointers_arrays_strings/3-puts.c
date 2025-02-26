#include "main.h"
#include <stdio.h>
/**
* _puts - Prints a string followed by a new line to stdout
* @str: Pointer to the string
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
