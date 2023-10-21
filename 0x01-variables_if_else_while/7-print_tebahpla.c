#include<stdio.h>

/**
 * main - Prints all the alphabet in reverse followed by a line
 * Return: Always 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');
	return (0);
}
