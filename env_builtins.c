#include "shell.h"
/**
 * p_env - a function that prints the environment variables.
 * @str : the string
 *
 * Return: 0 on success
 */
int p_env(char **str)
{
	int i = 0;
	(void)str;

	while (environ[i])
	{
		ssputs(environ[i]);
		i++
	}

	return (0);
}

/**
 * exit_env - exits the environment process
 * @str : string array
 *
 * Return: 0
 */
int exit_env(char **str)
{
	if (str[1])
	{
		return (ssatoi(str[1]));
	}
	else
		return (0);
}
