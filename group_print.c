#include "shell.h"

void group_print(const char *s)
{
	write(STDOUT_FILENO, s, strlen(s));
}
