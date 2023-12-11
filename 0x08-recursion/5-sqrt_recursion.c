#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural sqrroot of num
 * main - function that implements above
 * @n: number that we get squareroot of
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural sqroot of num
 * @n: number to get squareroot of
 * @i: iterator
 * Return: Always 0 (Success)
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
