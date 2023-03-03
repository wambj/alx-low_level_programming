#include "main.h"
#include <string.h>
/**
 * _strcmp -> for comparing purpose
 * @s1: param1
 * @s2: param2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
