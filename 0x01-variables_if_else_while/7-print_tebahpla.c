#include<stdio.h>

/**
 * main - Prints all the alphabet in reverse followed by a line
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar("%d", letter);

	putchar('\n');
	return (0);
}
