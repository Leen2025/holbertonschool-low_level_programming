#include "main.h"
/**
* _isalpha -Cheks for alphabetic character
* @c :the character to be checked
* Return: 1 if c is an  alphabetic character or 0 for anything else
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
