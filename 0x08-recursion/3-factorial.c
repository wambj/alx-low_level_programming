#include "main.h"
/**
 * factorial - returns factorsof a given number
 * main - A function that gives the factorial of a num
 * @n - returns the factorial from
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
