#include "main.h"
/**
 * factorial - returns the factorial of an integer
 * @n: number to return in factorial form
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
