#include <stdio.h>

/**
 * main - prints the alphabet in reverse,
 * in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char hc;

	for (hc = 'z'; hc <= 'a'; hc--)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);
}
