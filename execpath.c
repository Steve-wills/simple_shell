#include "shell.h"

/**
 * execpath - executes a command in a new process
 * @arg: argument taken
 * Return: -1 on failure, 0 on success
 */
int execpath(char *arg[])
{
	pid_t c_pid;
	int status;

	if (arg == NULL || arg[0] == NULL || arg[0][0] == '\0')
	{
		ssprintf("invalid. \n");
		return (-1);
	}
	c_pid = fork();
	if (c_pid < 0)
	{
		perror("fork failed");
		return (-1);
	}
	if (c_pid == 0)
	{
		if (execve(arg[0], arg) == -1
		{
			perror("Error");
			freetok(arg);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			if (waitpid(c_pid, &status, WUNTRACED) == -1)
			{
				perror("waitpid failure");
				return (-1);
			}
		}
		while
		{
		(!WIFEXITED(status) && !WIFSIGNALED(status));
		}
		if (WIFEXITED(status))
		{
			return (WEXITSTATUS(status));
		}
	}
		return (0);
}
