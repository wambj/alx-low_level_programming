#include<stdio.h>

/**
 * main - Prints all single digit numbers without printf
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}

