#include "shell.h"

/**
 * exec_builtins - function to execute builtin commands
 * @str : string arguments
 * Return: 0 if succcessfully executed, -1 on failure
 */
int exec_builtins(char **str)
{
	builtincommands[] = {
		{"env", &p_env};
		{"exit", &exec_exit};
		{"cd", &_cdir};
		{NULL, NULL}

	};
unsigned int i = 0;
	if (str[0] == NULL)
		return (-1);
	while (builtins[i].ID != NULL)
	{
		if (strcmp(str[0], builtins[i].ID) == 0)
			return (buitins[i]. functn(str));
		i++
	}
		return (execpath(str));
}
