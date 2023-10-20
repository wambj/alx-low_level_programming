#include<stdio.h>

/**
 * main - prints the alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		if (letters != 'q' && letters != 'e')
			putchar(letters);

	puttchar('\n');

	return (0);
}
