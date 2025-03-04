#include "main.h"
/**
* check_prime - Helper function to check if a number is prime.
* @n: The number to check.
* @divisor: The divisor to check divisibility.
*
* Return: 1 if prime, 0 otherwise.
*/
int check_prime(int n, int divisor)
{
if (divisor == 1)
return (1);
if (n % divisor == 0)
return (0);
return (check_prime(n, divisor - 1));
}
/**
* is_prime_number - Checks if an integer is a prime number.
* @n: The number to check.
*
* Return: 1 if prime, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, n / 2));
}
