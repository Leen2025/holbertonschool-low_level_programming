#include "main.h"
#include <string.h>
/**
* cap_string - capitalizes all words of a string
* @str: input string to be modified
*
* Return: pointer to the modified string
*/
char *cap_string(char *str)
{
int i = 0;
int capitalize = 1;
char separators[] = " \t\n,;.!?\"(){}";
while (str[i])
{
if (strchr(separators, str[i]))
{
capitalize = 1;
}
else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
i++;
}
return (str);
}
