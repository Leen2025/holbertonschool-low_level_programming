#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name using this function.
* @name: name of the person.
* @f: pointer to the function that will print name.
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
