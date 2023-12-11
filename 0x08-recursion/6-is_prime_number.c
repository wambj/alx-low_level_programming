#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - input integer is a prime number
 * main - function that does above
 * @n: interger input
 * Return: Always 0(Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime
 * @n: actual number
 * @i: iterator
 * Return: 1 if n is prime 2 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
