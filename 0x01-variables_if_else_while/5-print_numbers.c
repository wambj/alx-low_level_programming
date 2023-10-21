#include<stdio.h>
/**
 * main - Prints all single digit numbers with base of 10
 * Return: Always 0
 */
int main(void)
{
	int number;
	
	for(number = 0; number < 10; number++)
		putchar("The numbers are %d\n", number);
	return (0);
}
