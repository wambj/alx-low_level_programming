#include "main.h"
/**
 * _strlen_recursion - returns string length
 * main - a function that returns the length of a string
 * @s: input
 * Return: Always 0(Success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
