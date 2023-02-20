#include <stdio.h>

/**
 * main - Prints all single digit numbers starting from 0,
 * with a base of ten
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
