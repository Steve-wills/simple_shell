#include "shell.h"

/**
 * exec_builtins - function to execute builtin commands
 * @str : string arguments
 * Return: 0 if succcessfully executed, -1 on failure
 */
int exec_builtins(char **str)
{
	cmd builtins[] = {
		{"env", &p_env},
		{"exit", &exit_env},
		{"cd", &_cdir},
		{NULL, NULL}
	};

unsigned int i = 0;
	if (str[0] == NULL)
		return (-1);
	while (builtins[i].id != NULL)
	{
		if (strcmp(str[0], builtins[i].id) == 0)
			return (builtins[i].functn(str));
		i++;
	}
		return (execpath(str));
}
