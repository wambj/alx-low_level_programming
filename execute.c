#include "shell.h"

void execute_instruct(const char *instruct)
{
	pid_t c_pid = fork();

	if (c_pid == -1)
	{
		group_print("Error, try again later. \n");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		group_print("Waiting\n");
	}
}
