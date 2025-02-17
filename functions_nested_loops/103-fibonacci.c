#include <stdio.h>
/**
* main - Finds and prints the sum of even Fibonacci numbers
*        that do not exceed 4,000,000.
*
* Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1, b = 2, next;
long int sum = 2; /* Starting with 2 since it's the first even Fibonacci */
while (1)
{
next = a + b;
if (next > 4000000)
break;
if (next % 2 == 0) /* Check if even */
sum += next;
a = b;
b = next;
}
printf("%ld\n", sum);
return (0);
}
