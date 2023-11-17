#include <stdio.h>
#include "main.h"
/**
 *_sqrt_recursion - returns natural squareroot
 *@n: variable
 *Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n;
	int mid = (start + end) / 2;

	if (n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		start = mid + 1;
		return (_sqrt_recursion(n));
	}
	else if (mid * mid > n)
	{
		end = mid - 1;
		return (_sqrt_recursion(n));
	}
	else
	{
		return (-1);
	}
}
