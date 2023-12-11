#include "main.h"
/**
 * _pow_recursion - returns one value raised by another
 * main - a function that raises the value of x with y
 * @x: value of interger
 * @y: value raised by
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
