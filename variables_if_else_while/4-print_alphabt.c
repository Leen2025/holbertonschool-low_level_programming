#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase excluding 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; ch <= 'z'; low++)
{
if (low != e && ch != q)
{
putchar(low);
}
}
putchar('\n');
return (0);
}
