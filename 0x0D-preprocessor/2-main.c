#include <stdio.h>
#define NAME_H
/**
 * main - A program that prints the name of file compiled
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	#ifndef NAME_H
		printf("%s\n", __FILE__);
	#endif
	return (0);
}
