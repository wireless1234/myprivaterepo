#include <stdio.h>
/**
 *is_prime_number - returns 1 if the input is a prime number, else return 0
 *@n: variable
 *Return: integer
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (1 + is_prime_number(n - 1));
	}
}
